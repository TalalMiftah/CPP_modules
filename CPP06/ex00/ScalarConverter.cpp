/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:18 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 17:22:39 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "ScalarCnverter: Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
    std::cout << "ScalarCnverter: Destructor called" << std::endl;
}

std::string parse_input(std::string& str) {
    if (str == "+inf" || str == "+inff")
        return ("+infinit");
    else if (str == "-inf" || str == "-inff")
        return ("-infinit");
    else if (str == "nan")
        return ("nan");
    return ("");
}

int check_number(std::string str, int &c) {
    int r = 0;
    int j = 0;

    if (str[str.length() - 1] == 'f')
        r++;
    while (str[j])
    {
        if (str[j] == '.')
            c++;
        j++;
    }
    if ((str[0] == '-' || str[0] == '+'))
        str = str.substr(1, str.length() - 1);
    for (size_t i = 0; i < str.length() - r; i++)
    {
        if (str[i] != '.' && !isdigit(str[i]))
            return (1);
        if (str[i] && str[i] == '.' && !isdigit(str[i + 1]))
            return (1);
        if (!isdigit(str[i]) && c > 1)
            return (1);
    }
    if (c == 0 && str[str.length() - 1] == 'f')
        return 1;
    return (0);
}

int parse(std::string str, int& c) {
    if (check_number(str, c))
        return (1);
    return (0);
}

std::string end_f(std::string str) {
    if (str == "+inf" || str == "-inf")
        return ("f");
    return ("");
}

void ScalarConverter::convert(std::string& str) {
    int integer;
    double Double, intpart;
    char charachter;
    float f;
    int c = 0;
    std::string pa = parse_input(str);

    if (parse(str, c) && pa.empty() && str.length() != 1)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    if (pa.empty())
    {
        if (str[str.length() - 1] == 'f' && str.length() > 1)
            str = str.substr(0, str.length() - 1);
        std::stringstream w(str);
        w >> Double;
        if (str.length() == 1 && isalpha(str[0]))
            Double = static_cast<double>(str[0]);
        charachter = static_cast<char>(Double);
        integer = static_cast<int>(Double);
        f = static_cast<float>(Double);
        if (charachter <= 32)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << charachter << "'" << std::endl;
        std::cout << "int: " << integer << std::endl;
        if (c == 1 && modf(f, &intpart) != 0)
        {
            std::cout << "hna" << std::endl;
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << Double << std::endl;
        }
        else
        {
            std::cout << "float: " << f  << ".0f" << std::endl;
            std::cout << "double: " << Double << ".0" << std::endl;
        }
    }
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str + end_f(str) << std::endl;
        if (str == "+inff" || str == "-inff")
            c++;
        std::cout << "double: " << str.substr(0, str.length() - c) << std::endl;
    }
}

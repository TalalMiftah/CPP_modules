/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:08:36 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/15 17:15:01 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int StringPipeCheck(std::string str) {
    std::stringstream ss(str);
    std::string tmp;
    size_t i = str.find("|");

    if (str[i + 1] != ' ' || str[i - 1] != ' ')
        return 1;
    i = 0;
    while (ss >> tmp)
        i++;
    if (i > 3)
        return 1;
    return (0);
}

int HasThirty(int month) {
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return (0);
    return (1);
}

int HasThirtyOne(int month) {
    if (month == 1 ||
        month == 3 ||
        month == 5 ||
        month == 7 ||
        month == 8 ||
        month == 10 ||
        month == 12)
        return (0);
    return (1);
}

int days_parse(float days, float month, float years) {
    if ((days < 1 || days > 30) && !HasThirty(month))
        return (1);
    if ((days < 1 || days > 31) && !HasThirtyOne(month))
        return (1);
    if (month == 2)
    {
        if (days < 1 || days > 29)
            return (1);
        if (!(((int)years % 4 == 0 && (int)years % 100 != 0) || ((int)years % 400 == 0)) && days > 28)
            return (1);
    }
    return (0);
}

int CheckNumber(std::string &str) {
    for (size_t i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.')
            return (1);
    }
    return(0);
}

int ParseDate(std::string str, std::string &erro) {
    std::stringstream ss(str);
    std::string years;
    std::string month;
    std::string days;

    if (str.empty())
        return (1);
    getline(ss, years, '-');
    getline(ss, month, '-');
    getline(ss, days);

    if (years.empty() || CheckNumber(years)
        || month.empty() || CheckNumber(month)
        || days.empty() || CheckNumber(days))
        return (erro = str, 1);
    if (years.size() != 4
        || month.size() != 2
        || days.size() != 2)
        return (erro = str, 1);
    if (atof(years.c_str()) < 2009)
        return (erro = str, 1);
    if (atof(month.c_str()) < 1 || atof(month.c_str()) > 12)
        return (erro = str, 1);
    if (days_parse(atof(days.c_str()), atof(month.c_str()), atof(years.c_str())))
        return (erro = str, 1);
    return (0);
}

int ParseValue(std::string str) {
    float amount;
    int point = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (i == 0 && str[i] == '-')
            i++;
        if (!isdigit(str[i]))
        {
            if (str[i] == '.' && point < 1)
            {
                point++;
                if (!isdigit(str[i - 1]) || !isdigit(str[i + 1]))
                    return (std::cout << "Error: bad input => " << str << std::endl, 1);
            }
            else
                return (std::cout << "Error: bad input => " << str << std::endl, 1);
        }
    }
    amount = atof(str.c_str());
    if (amount < 0)
        return (std::cout << "Error: not a positive number." << std::endl, 1);
    if (amount > 1000)
        return (std::cout << "Error: too large a number." << std::endl, 1);
    return (0);
}

void FillMap(std::map<std::string, float> &data, std::ifstream &input) {
    std::string str;
    std::string tmp;

    getline(input, str);
    if (str != "date,exchange_rate")
        throw std::runtime_error("Error: database issue");
    while (getline(input, str))
    {
        std::stringstream ss(str);
        std::pair<std::string, float> pairData;
        getline(ss, pairData.first, ',');
        getline(ss, tmp);
        pairData.second = atof(tmp.c_str());
        data.insert(pairData);
        ss.clear();
    }
}

void execute_program(std::ifstream& inputf, std::map<std::string, float> & data) {
    std::string str;
    std::string key;
    std::string pip;
    std::string value;
    std::map<std::string, float>::iterator dataitr;

    getline(inputf, str);
    if (str.empty() || str != "date | value")
        std::cout << "Error" << std::endl;
    while (getline(inputf, str))
    {
        std::stringstream w(str);
        w >> key;
        w >> pip;
        w >> value;
        if (StringPipeCheck(str) || ParseDate(key, str) || value.empty() || pip != "|")
        {
            std::cout << "Error: bad input => " << str << std::endl;
            pip.clear();
            key.clear();
            value.clear();
            continue;
        }
        if (ParseValue(value))
        {
            pip.clear();
            key.clear();
            value.clear();
            continue;
        }
        dataitr = data.find(key);
        if (dataitr == data.end())
        {
            dataitr = data.upper_bound(key);
            dataitr--;
        }
        std::cout << key << " => " << value << " = " << atof(value.c_str()) * dataitr->second << std::endl;
        pip.clear();
        key.clear();
        value.clear();
        w.clear();
    }
}

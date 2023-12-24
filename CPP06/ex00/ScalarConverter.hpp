/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:22 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 17:23:32 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <cmath>

class ScalarConverter
{
    private:
        ScalarConverter();
    public:
        static void convert(std::string& str);
        ~ScalarConverter();
};

#endif
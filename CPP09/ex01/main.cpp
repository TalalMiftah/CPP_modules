/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:58:02 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/15 13:03:09 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char ** av) {
	if (ac <= 1)
		return (std::cout << "argument issue" << std::endl, 1);
	try
	{
		std::string str;
		int j;

		for (size_t i = 1; av[i]; i++)
		{
			j = 0;
			str = str + av[i];
			for (size_t i = 0; i < str.size(); i++)
				if (IsOperator(str[i]))
					j++;
			SimpleParse(str, j);
			str += " ";
		}
		if (j >= 0)
			throw std::runtime_error("number of operators is >= numbers");
		RPN(str);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << '\n';
	}
	return (0);
}
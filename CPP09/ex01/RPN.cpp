/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:58:07 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/15 13:17:23 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int IsOperator(char c) {
	return (c == '/' || c == '+' || c == '-' || c == '*');
}

void SimpleParse(std::string string, int& op) {
	int j;
	std::string str;
	std::stringstream w(string);

	while (w >> str)
	{
		if (str.size() != 1)
			throw std::runtime_error(string);
		j = 0;
		while (str[j])
		{
			if (str[j] && (!IsOperator(str[j]) && !isdigit(str[j])))
				throw std::runtime_error(str);
			if (!IsOperator(str[j]))
				op -= str.size();
			j++;
		}
		w.clear();
	}
}

void RPN_help(std::stack<int>& i, char oper) {
	std::string str[4] = {"+", "-", "*", "/"};
	int j = 0;
	int a;
	int b;
	while (j < 4)
	{
		if (str[j][0] == oper)
			break ;
		j++;
	}
	if (i.empty())
		throw std::runtime_error("");
	b = i.top();
	i.pop();
	if (i.empty())
		throw std::runtime_error("");
	a = i.top();
	i.pop();
	switch (j)
	{
		case 0 :
			i.push(a + b);
			break;
		case 1 :
			i.push(a - b);
			break;
		case 2 :
			i.push(a * b);
			break;
		case 3 :
			if (b == 0)
				throw std::runtime_error("devide by 0 error");
			i.push(a / b);
			break;
		default:
			break;
	}      
}

void RPN(std::string& str) {
	std::stringstream ss(str);
	std::string tmp;
	std::stack<int> i;
	while (ss >> tmp)
	{
		if (isdigit(tmp[0]))
			i.push(atof(tmp.c_str()));
		else
			RPN_help(i, tmp[0]);
	}
	if (i.size() != 1)
		throw std::runtime_error("Syntax error");
	std::cout << i.top() << std::endl;                
}
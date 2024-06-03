/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:58:10 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/13 15:58:11 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <sstream>
#include <exception>

void SimpleParse(std::string string, int& j);
void RPN(std::string& str);
int IsOperator(char c);

#endif
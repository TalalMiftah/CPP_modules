/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:51:06 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/13 14:51:07 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <array>
#include <algorithm>
#include <sstream>

int StringPipeCheck(std::string str);
int HasThirty(int month);
int HasThirtyOne(int month);
int days_parse(float days, float month, float years);
int ParseDate(std::string str, std::string &erro);
int ParseValue(std::string str);
void execute_program(std::ifstream& inputf, std::map<std::string, float> & data);
void FillMap(std::map<std::string, float> &data, std::ifstream &input);

#endif
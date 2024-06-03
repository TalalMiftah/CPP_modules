/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:40:02 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/13 17:40:03 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <vector>
# include <deque>
# include <ctime>
# include <iostream>
# include <sstream>
# include <algorithm>

void Pmergeme(std::vector<int> &v);
void Pmergeme(std::deque<int> &v);
void parse(char **str, std::vector<int> &v);
void parse(char **str, std::deque<int> &v);

#endif

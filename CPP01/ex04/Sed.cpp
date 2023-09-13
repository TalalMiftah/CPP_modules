/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:31:42 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 12:31:43 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	fun(std::string filename, std::string s1, std::string s2)
{
	int i;
	std::string line;
	std::ifstream inputf(filename);
	
	if (!inputf)
		return (std::cout << "The file is not exist or we can not read from it." << std::endl , 1);
	filename += ".replace";
	std::ofstream outputf(filename);
	if (!outputf)
		return (std::cout << "there is a problem we cannot create the file" << std::endl , 1);
	while (getline(inputf, line))
	{
		i = 0;
		while (!s2.empty() &&!s1.empty() && line[i])
		{
			if (!line.compare(i, s1.length(), s1))
				line = line.substr(0, i) + s2 + line.substr(i + s1.length(), line.length());
			i++;
		}
		outputf << line;
		if (!inputf.eof())
			outputf << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:01:11 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/08 16:04:25 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int ac, char **av)
{
	int			i;
	int			j;
	std::string	str;

	i = 0;
	j = 1;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	while (av[j])
	{
		i = 0;
		str = av[j];
		while (str[i])
		{
			str[i] = std::toupper(str[i]);
			i++;
		}
		std::cout << str;
		j++;
	}
	std::cout << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:01:11 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/02 17:59:25 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (isalpha(av[j][i]))
				av[j][i] = toupper(av[j][i]);
			std::cout << av[j][i];
			i++;
		}
		j++;
	}
	std::cout << "\n";
	return (0);
}

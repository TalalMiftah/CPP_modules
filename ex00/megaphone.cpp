
#include <iostream>

int	is_alpha_ft(char c)
{
	return ((c >= 'a' && c<= 'z'));
}

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
			if (is_alpha_ft(av[j][i]))
				av[j][i] = toupper(av[j][i]);
			std::cout << av[j][i];
			i++;
		}
		j++;
	}
	std::cout << "\n";
	return (0);
}
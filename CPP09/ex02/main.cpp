/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:39:50 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/15 15:00:04 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printResult(char **av, std::vector<int> &v) {
    std::cout << "Befor:\t";
    for (size_t i = 1; av[i]; i++)
    {
            std::cout << av[i];
        std::cout << " ";
    }
    std::cout << "\n";
        std::cout << "After:\t";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << "\n";
}

int main(int ac, char **av) {
    if (ac <= 1)
        return (std::cout << "Error" << std::endl, 1);
    try
    {
        float f;
        std::deque<int> d;
        std::vector<int> v;

        clock_t start = clock();
        parse(av + 1, d);
        Pmergeme(d);
        clock_t end = clock();
        f = end - start;
        start = clock();
        parse(av + 1, v);
        Pmergeme(v);
        end = clock();
        printResult(av, v);
        std::cout << "Time to process a range of\t" << v.size() << " elements with std::vector : " << (float)(end - start)  << " us"<< std::endl;
        std::cout << "Time to process a range of\t" << d.size() << " elements with std::deque : " << f  << " us" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
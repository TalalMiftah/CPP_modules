/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:43:29 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/31 15:43:30 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try {
        Span sp(4);
        std::vector<int>v;
        v.push_back(10);
        v.push_back(1);
        sp.addNumbers(v);
        std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
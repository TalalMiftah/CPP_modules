/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:43:23 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/31 15:43:24 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> v;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &S);
        Span& operator=(const Span &S);
        ~Span();
        
        class ArrayIsFull : public std::exception {
            const char * what() const throw();
        };
        class YourArrayIsEmpty : public std::exception {
            const char * what() const throw();
        };

        void addNumber(unsigned int N);
        void addNumbers(std::vector<int> elements);
        int shortestSpan();
        int longestSpan();
};

#endif
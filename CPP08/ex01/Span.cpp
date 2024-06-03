/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:43:25 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/31 15:43:44 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(4){
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(const Span &S) {
    std::cout << "Copy constructor called" << std::endl;
    *this = S;
}

Span::Span(unsigned int N) {
    this->N = N;
}

Span& Span::operator=(const Span &S) {
    std::cout << "Copy Assignment operator called" << std::endl;
    this->N = S.N;
    for (size_t i = 0; i < S.v.size(); i++)
        addNumber(S.v[i]);
    return (*this);
}

Span::~Span() {
    std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(unsigned int N) {
    if (v.size() >= this->N)
        throw ArrayIsFull();
    this->v.push_back(N);
}

const char * Span::ArrayIsFull::what() const throw() {
    return ("All the N elements are stored");
}

const char * Span::YourArrayIsEmpty::what() const throw() {
    return ("You May Have An Empty Array Or There Is Only One Number");
}

int Span::longestSpan() {
    if (this->v.size() <= 1)
        throw YourArrayIsEmpty();
    sort(this->v.begin(), this->v.end()); 
    return(this->v[v.size() - 1] - this->v[0]);
}

int Span::shortestSpan() {
    if (this->v.size() <= 1)
        throw YourArrayIsEmpty();
    sort(this->v.begin(), this->v.end());
    int min = 2147483647;
    int i = this->v.size() - 1;
    while (i - 1 >= 0)
    {
        if (min > this->v[i] - this->v[i - 1])
            min = this->v[i] - this->v[i - 1];
        i--;
    }
    return (min);
}

void Span::addNumbers(std::vector<int> elements) {
    if ((this->v.size() + elements.size()) > this->N)
        throw ArrayIsFull();
    this->v.insert(this->v.end(), elements.begin(), elements.end());
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 14:29:26 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/24 19:01:30 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>


template<typename T>

class Array
{
    private:
        T *tab;
        unsigned int i;
    public:
        Array() {
            std::cout << "Default Constructor called" << std::endl;
            i = 0;
            tab = new T[i];
        }
        
        Array(unsigned int n) {
            this->i = n;
            tab = new T[n];
        }
        
        Array(Array &A) {
            this->tab = new T[A.i];
            this->i = A.i;
            for (unsigned int i = 0; i < this->i; i++)
                this->tab[i] = A.tab[i];
        }
        
        Array& operator=(Array &A) {
            delete [] tab;
            this->tab = new T[A.i];
            this->i = A.i;
            for (unsigned int i = 0; i < this->i; i++)
                this->tab[i] = A.tab[i];
            return (*this);
        }
        
        T& operator[](int i) {
            if ((unsigned int)i >= this->i)
                throw NonAcceptedIndex();
            return(this->tab[i]);
        }
        
        unsigned int size() const {
            return this->i;
        }
        
        class NonAcceptedIndex : public std::exception {
            const char * what() const throw() {
                return ("the index is out of range");
            }
        };
        
        ~Array() {
            delete [] tab;
        }
};

#endif
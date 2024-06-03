/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:50:58 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/31 15:50:59 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {
			std::cout << "Default Constructor called" << std::endl;
		}
		MutantStack& operator=(MutantStack& MS) {
			std::cout << "Default Constructor called" << std::endl;
			(void)MS;
			return (*this);
		}
		MutantStack(MutantStack& MS) {
			std::cout << "Default Constructor called" << std::endl;
			(void)MS;
		}
		~MutantStack() {
			std::cout << "Destructor called" << std::endl;
		}

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;

		iterator begin() {
			iterator it = this->c.begin();
			return (it);
		}
		iterator end() {
			iterator it = this->c.end();
			return (it);
		}
		reverse_iterator rbegin() {
			reverse_iterator it = this->c.rbegin();
			return (it);
		}
		reverse_iterator rend() {
			reverse_iterator it = this->c.rend();
			return (it);
		}
};

#endif
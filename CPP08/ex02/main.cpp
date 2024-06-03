/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:50:54 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/31 15:50:55 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3); //head is 3
    mstack.push(737); //head is 737
    
    std::cout << "the head of the stack: " << mstack.top() << std::endl;
    std::cout << "the size of the stack: " << mstack.size() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    std::cout << "begin: " << *it << std::endl;
    
    it = mstack.end();
    std::cout << "end: " << *(it - 1) << std::endl << std::endl;
    
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    std::cout << "rbegin: " << *rit << std::endl;

    rit = mstack.rend();
    std::cout << "rend: " << *(rit - 1) << std::endl;
    return 0;
}
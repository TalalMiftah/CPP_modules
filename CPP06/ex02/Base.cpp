/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:40 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 16:42:41 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
    std::cout << "Base: Desctructor Called" << std::endl;
}

Base *Base::generate(void) {
    srand(time(0));
    int i = rand();
    switch (i % 3)
    {
        case 0 :
            return(new A());
        case 1 :
            return(new B());
        case 2 :
            return(new C());
        default:
            break;
    }
    return (NULL);
}

void Base::identify(Base* p) {
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void Base::identify(Base& p) {
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (const std::bad_cast& e) {}
    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch (const std::bad_cast& e) {}
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch (const std::bad_cast& e) {}
}
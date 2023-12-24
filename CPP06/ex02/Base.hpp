/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:45 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 16:42:46 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BASE_HPP
#define BASE_HPP
#include <iostream>
#include <string>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

class A : public Base
{
    
};

class B : public Base
{

};

class C : public Base
{

};

#endif
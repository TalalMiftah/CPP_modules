/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:36 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 16:42:37 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>
#include <string>

typedef struct data
{
    int d;
    char c;
    std::string str;
} Data;

class Serializer
{
    private:
        Serializer();
    public:
        static  uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};

#endif
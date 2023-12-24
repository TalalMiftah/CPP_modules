/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:17 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:21:38 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	{
        std::cout << "================= First Example ==================" << std::endl;
		Animal* j = new Dog();
		Animal* i = new Cat();

		delete j; //should not create a leak
		delete i;
	}
	{
        std::cout << "================= Second Example ==================" << std::endl;
		Cat dog;
		Cat tmp = dog; // sould not crash or gives double free
	}
	{
        std::cout << "================= Third Example ==================" << std::endl;
		Animal *a[10];
		for (int i = 0; i < 5; i++)
			a[i] = new Cat();

		for (int i = 5; i < 10; i++)
			a[i] = new Dog();

		for (int i = 0; i < 10; i++)
			delete a[i];
	}
	return 0;
}
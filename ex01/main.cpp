/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 15:50:09 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;
	size_t tab_size = 6;
	const Animal* Animaux[tab_size];
	for (size_t i = 0; i < tab_size; i++)
	{
		if (i % 2 == 0)
			Animaux[i] = new Dog();
		else
			Animaux[i] = new Cat();
	}
	for (size_t k = 0; k < tab_size; k++)
	{
		delete Animaux[k];
	}


/* 	std::cout << std::endl;


	const Animal* test(j);

	const Animal* test2;

	test2 = test;

	std::cout << test->getType() << " " << std::endl;
	std::cout << test2->getType() << " " << std::endl; */
	return 0;
}

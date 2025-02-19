/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/19 16:05:25 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete i;
	delete j;

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

	std::cout << std::endl;

	Animal test;
	Cat chat;
	test = chat;
	Animal test1(test);
	Animal test2;

	test2 = test;

	std::cout << test.getType() << " " << std::endl;
	std::cout << test1.getType() << " " << std::endl;
	std::cout << test2.getType() << " " << std::endl;

	chat.getBrain()->setIdea("coucou");
	chat.getBrain()->setIdea("hey");

	std::cout << chat.getBrain()->getIdea(0) << std::endl;
	std::cout << chat.getBrain()->getIdea(1) << std::endl;

	Cat chat2(chat);

	chat.getBrain()->setIdea("cv");

	std::cout << chat.getBrain()->getIdea(0) << std::endl;
	std::cout << chat.getBrain()->getIdea(1) << std::endl;
	std::cout << chat.getBrain()->getIdea(2) << std::endl;
	std::cout << chat2.getBrain()->getIdea(0) << std::endl;
	std::cout << chat2.getBrain()->getIdea(1) << std::endl;
	std::cout << chat2.getBrain()->getIdea(2) << std::endl;

	return 0;
}

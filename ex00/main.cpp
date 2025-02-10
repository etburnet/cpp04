/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:34:30 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	k->makeSound(); //will output the WRONG cat sound!
	meta->makeSound();


	std::cout << std::endl;

	const Animal* test(j);

	const Animal* test2;

	test2 = test;

	std::cout << test->getType() << " " << std::endl;
	std::cout << test2->getType() << " " << std::endl;


	delete meta;
	delete j;
	delete i;
	delete k;
	return 0;
}

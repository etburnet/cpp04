/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/03/25 09:13:29 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "-------------Creation Animaux-------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;
	std::cout << "-------------Get Types-------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	
	std::cout << std::endl;
	std::cout << "-------------Make Sound-------------" << std::endl;
	j->makeSound();
	i->makeSound();
	k->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "-------------Operateur d'assignation et constructeur de recopie-------------" << std::endl;

	const Animal* test(j);
	const Animal* test2;
	test2 = test;
	std::cout << test->getType() << " " << std::endl;
	std::cout << test2->getType() << " " << std::endl;

	std::cout << std::endl;
	std::cout << "-------------Suppression Animaux-------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete k;
	return 0;
}

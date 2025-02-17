/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:29:17 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/17 14:51:44 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria* ice1 = new Ice();
	AMateria* cure1 = new Cure();
	AMateria* ice2 = new Ice();
	// AMateria* cure2 = new Cure();

	src->learnMateria(ice1);
	delete ice1;
	src->learnMateria(cure1);
	delete cure1;
	src->learnMateria(ice2);
	delete ice2;
	// src->learnMateria(cure2);
	// delete cure2;

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	ICharacter* dob = new Character("dob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *dob);
	me->use(3, *dob);
	

	std::cout << std::endl;

	AMateria *test;
	test = me->getInventaire(2);
	me->unequip(2);
	delete test;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(2, *bob);

	std::cout << std::endl;


	AMateria *save[4];
	for (size_t i = 0; i < 4; i++)
		save[i] = me->getInventaire(i);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);

	for (size_t i = 0; i < 4; i++)
		delete save[i];
	
	delete bob;
	delete dob;
	delete me;
	delete src;

	return 0;
}
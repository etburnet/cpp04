/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:29:17 by eburnet           #+#    #+#             */
/*   Updated: 2025/03/25 09:26:07 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "-------------Creation materia-------------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	AMateria* ice1 = new Ice();
	AMateria* cure1 = new Cure();

	src->learnMateria(ice1);
	delete ice1;
	src->learnMateria(cure1);
	delete cure1;

	ICharacter* me = new Character("me");
	
	std::cout << std::endl;
	std::cout << "-------------Equip materia-------------" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << "-------------Utilisation materia-------------" << std::endl;
	ICharacter* bob = new Character("bob");
	ICharacter* dob = new Character("dob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *dob);
	me->use(3, *dob);
	

	std::cout << std::endl;
	std::cout << "-------------Unequip materia-------------" << std::endl;
	AMateria *save[4];
	for (size_t i = 0; i < 4; i++)
		save[i] = static_cast<Character*>(me)->getInventaire(i);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);

	std::cout << std::endl;
	std::cout << "-------------Destruction materia/Character-------------" << std::endl;
	for (size_t i = 0; i < 4; i++)
	delete save[i];
	delete bob;
	delete dob;
	delete me;
	delete src;

	return 0;
}
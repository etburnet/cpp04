/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:56:25 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/14 16:31:35 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{

}

Character::Character(std::string _name)
{
	this->name = _name;
	for (int i = 0; i < 4; ++i)
		inventaire[i] = NULL;
}

Character::Character(const Character &other)
{
	Character::operator=(other);
}

Character& Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete this->inventaire[i];
			if (other.inventaire[i])
				this->inventaire[i] = other.inventaire[i]->clone();
			else
				this->inventaire[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete this->inventaire[i];
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && inventaire[i] != NULL)
		i++;
	if (i < 4)
		inventaire[i] = m;
	else
		std::cerr << "Inventory is full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || this->inventaire[idx] == NULL)
		return ;
	this->inventaire[idx]->use(target);
}

AMateria *Character::getInventaire(int idx)
{
	return (this->inventaire[idx]);
}

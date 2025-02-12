/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:56:25 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/12 15:12:49 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string _name)
{
	this->name = _name;
}

Character::Character(const Character &other)
{
	Character::operator=(other);
}

Character& Character::operator=(const Character &other)
{
	*this->inventaire = *other.inventaire;
	this->name = other.name;
	return (*this);
}

Character::~Character()
{

}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (this->inventaire[i] != NULL)
		i++;
	if (i <= 3)
		this->inventaire[i] = m;
		
}

void Character::unequip(int idx)
{
	this->inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventaire[idx]->use(target);
}

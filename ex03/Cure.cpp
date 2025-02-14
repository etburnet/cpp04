/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:54 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/14 16:27:59 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &other) : AMateria()
{
	Cure::operator=(other);
}

Cure& Cure::operator=(const Cure &other) 
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cure::~Cure()
{
}

std::string const & Cure::getType() const
{
	return (this->_type);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:42:42 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/11 15:12:22 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &other)
{
	AMateria::operator=(other);
}

AMateria& AMateria::operator=(const AMateria &other)
{
	this->_type = other._type;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target->name << " *" << std::endl;
	else
		std::cout << "* heals " << target->name << "’s wounds *" << std::endl;
}

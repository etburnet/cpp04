/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:42:42 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/17 13:50:19 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria Constructor Called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
	AMateria::operator=(other);
}

AMateria& AMateria::operator=(const AMateria &other)
{
	this->_type = other._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "Type Error" << std::endl;
}
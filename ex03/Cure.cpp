/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:54 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/17 13:49:02 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Cure Constructor Called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &other) : AMateria()
{
	std::cout << "Cure Copy Constructor Called" << std::endl;
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
	std::cout << "Cure Destructor Called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

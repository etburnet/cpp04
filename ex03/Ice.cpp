/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:53:00 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/17 13:48:54 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Ice Constructor Called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &other) : AMateria()
{
	std::cout << "Ice Copy Constructor Called" << std::endl;
	Ice::operator=(other);
}

Ice& Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}
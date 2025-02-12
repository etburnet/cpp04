/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:42:42 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/12 15:44:56 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:54 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/11 14:56:51 by eburnet          ###   ########.fr       */
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
	this->_type = other._type;
	return (*this);
}

Cure::~Cure()
{
}
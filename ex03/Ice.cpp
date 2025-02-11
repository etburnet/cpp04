/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:53:00 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/11 14:57:53 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &other) : AMateria()
{
	Ice::operator=(other);
}

Ice& Ice::operator=(const Ice &other)
{
	this->_type = other._type;
	return (*this);
}

Ice::~Ice()
{
}
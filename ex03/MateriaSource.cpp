/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:56:14 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/12 15:50:48 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	MateriaSource::operator=(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	this->copy = other.copy;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	
}

void MateriaSource::learnMateria(AMateria *other)
{
	this->copy = other->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	return (this->copy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:56:14 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/14 16:36:37 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		this->copy[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	MateriaSource::operator=(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	*this->copy = *other.copy;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->copy[i];
}

void MateriaSource::learnMateria(AMateria *other)
{
	int i = 0;

	while (this->copy[i] != NULL)
		i++;
	if (i < 4)
		this->copy[i] = other->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->copy[i] && this->copy[i]->getType() == type)
			return this->copy[i]->clone();
	}
	return NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:30 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:32:37 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	WrongAnimal::operator=(other);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy assignment operator Called" << std::endl;
	this->sound = other.sound;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Desstructor Called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->sound << std::endl;
}

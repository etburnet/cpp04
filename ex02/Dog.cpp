/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:49 by eburnet           #+#    #+#             */
/*   Updated: 2025/03/24 16:57:41 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->type = "Dog";
	this->sound = "Woof";
	this->cerveaux = new Brain();
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	Dog::operator=(other);
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator Called" << std::endl;
	this->sound = other.sound;
	this->type = other.type;
	this->cerveaux = new Brain(*other.cerveaux);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete cerveaux;
}

Brain* Dog::getBrain()
{
	return(this->cerveaux);
}

void Dog::makeSound() const
{
	std::cout << "wouuf" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:46 by eburnet           #+#    #+#             */
/*   Updated: 2025/03/24 16:56:55 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->type = "Cat";
	this->sound = "Meow";
	this->cerveaux = new Brain();
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	Cat::operator=(other);
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator Called" << std::endl;
	this->sound = other.sound;
	this->type = other.type;
	this->cerveaux = new Brain(*other.cerveaux);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete cerveaux;
}

Brain* Cat::getBrain()
{
	return(this->cerveaux);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

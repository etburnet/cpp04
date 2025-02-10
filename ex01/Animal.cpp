/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:15 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:25:39 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	Animal::operator=(other);
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->sound = other.sound;
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Desstructor Called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << this->sound << std::endl;
}
	

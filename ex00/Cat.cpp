/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:46 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:30:12 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->type = "Cat";
	this->sound = "Meow";
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
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}
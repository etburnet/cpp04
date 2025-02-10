/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:36 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:32:10 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
	this->type = "WrongCat";
	this->sound = "Woof";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	WrongCat::operator=(other);
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment operator Called" << std::endl;
	this->sound = other.sound;
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}
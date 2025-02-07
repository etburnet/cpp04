/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:49 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 14:41:01 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->type = "Dog";
	this->sound = "Woof";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}
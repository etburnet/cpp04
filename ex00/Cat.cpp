/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:46 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 14:41:11 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->type = "Cat";
	this->sound = "Meow";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}
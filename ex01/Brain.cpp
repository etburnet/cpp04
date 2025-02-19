/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:52 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/19 15:33:15 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "";
	
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	Brain::operator=(other);
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator Called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

void Brain::setIdea(std::string newIdea)
{
	static int id = 0;
	this->ideas[id] = newIdea;
	id++;
}

std::string Brain::getIdea(int id)
{
	return (this->ideas[id]);
}

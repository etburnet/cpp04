/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:52 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 13:58:35 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	Brain::operator=(other);
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator Called" << std::endl;
	*this->ideas = *other.ideas;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

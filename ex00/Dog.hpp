/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:51 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:30:45 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#endif

class Dog : public Animal
{
	private:
		
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();
};


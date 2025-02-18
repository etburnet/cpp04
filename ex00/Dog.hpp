/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:51 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:46:17 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();
};


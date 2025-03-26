/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:51 by eburnet           #+#    #+#             */
/*   Updated: 2025/03/24 16:57:38 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	private:
		Brain *cerveaux;
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		virtual ~Dog();
		Brain* getBrain();
		void makeSound() const;
};


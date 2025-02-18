/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:17 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:26 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>


class Animal
{
	protected:
		Animal();
		std::string type;
		std::string sound;
	public:
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();
		std::string getType() const;
		void makeSound() const;
};

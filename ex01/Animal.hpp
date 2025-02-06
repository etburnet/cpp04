/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:17 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/06 10:30:32 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal
{
	private:
		
	protected:
		std::string type;
		std::string sound;
	public:
		Animal();
		virtual ~Animal();
		std::string getType() const;
		void makeSound() const;
};

#endif
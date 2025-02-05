/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:33 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/05 13:18:18 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP


class WrongAnimal
{
	private:
		
	protected:
		std::string type;
		std::string sound;
	public:
		WrongAnimal();
		~WrongAnimal();
		std::string getType() const;
		void makeSound() const;
};

#endif
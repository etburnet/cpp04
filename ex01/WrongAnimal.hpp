/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:33 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:10 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
		std::string sound;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);
		~WrongAnimal();
		std::string getType() const;
		void makeSound() const;
};

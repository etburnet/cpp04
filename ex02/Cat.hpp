/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:48 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:39 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	private:
		Brain *cerveaux;
	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		virtual ~Cat();
};

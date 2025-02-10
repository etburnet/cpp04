/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:25:48 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/10 11:23:31 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#endif

class Cat : public Animal
{
	private:
		
	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();
};

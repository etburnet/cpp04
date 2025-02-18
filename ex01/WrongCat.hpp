/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:37 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:15 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{	
	public:
		WrongCat();
		WrongCat(const WrongCat&);
		WrongCat& operator=(const WrongCat&);
		~WrongCat();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:53:02 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:48:29 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
	private:
		
	public:
		Ice();
		Ice(const Ice&);
		Ice& operator=(const Ice&);
		~Ice();
		AMateria* clone() const;
};

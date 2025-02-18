/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:57 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:48:47 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		Cure(const Cure&);
		Cure& operator=(const Cure&);
		~Cure();
		AMateria* clone() const;
};

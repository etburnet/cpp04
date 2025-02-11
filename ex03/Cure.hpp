/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:57 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/11 14:38:24 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		Cure(const Cure&);
		Cure& operator=(const Cure&);
		~Cure();
};

#endif

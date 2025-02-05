/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:54 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/05 14:51:26 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
};

#endif

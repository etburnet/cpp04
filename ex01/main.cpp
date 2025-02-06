/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/06 11:43:24 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	size_t tab_size = 6;
	const Animal* Animaux[tab_size];
	for (size_t i = 0; i < tab_size; i++)
	{
		if (i % 2 == 0)
			Animaux[i] = new Dog();
		else
			Animaux[i] = new Cat();
	}
	for (size_t k = 0; k < tab_size; k++)
	{
		delete Animaux[k];
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:22:24 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/05 15:25:48 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	size_t tab_size = 6;
	const Animal* Animaux[tab_size];
	for (size_t i = 0; i < tab_size / 2; i++)
	{
		Animaux[i] = new Dog();
	}
	for (size_t j = tab_size / 2; j < tab_size; j++)
	{
		Animaux[j] = new Cat();
	}
	for (size_t k = 0; k < tab_size; k++)
	{
		delete 
	}
	
	return 0;
}

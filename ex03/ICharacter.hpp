/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:46 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/11 15:48:33 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ICharacter
{
	protected:
		std::string name;
		AMateria* inventaire[4];
	public:
		
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

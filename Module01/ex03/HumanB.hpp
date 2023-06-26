/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:46:56 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/21 17:46:57 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*weapon;
		std::string	name;
	public:
		HumanB(std::string);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};
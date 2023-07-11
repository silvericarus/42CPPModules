/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:28:42 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/10 16:37:48 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	*clap = new DiamondTrap("Clap");

	clap->whoAmI();
	clap->attack("enemy");
	clap->takeDamage(10);
	clap->beRepaired(10);
	clap->guardGate();
	clap->highFivesGuys();
	delete clap;
	return (0);
}
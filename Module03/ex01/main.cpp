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
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavTrap("scavTrap");

	scavTrap.attack("target");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:14:00 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/11 21:14:00 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hp = FragTrap::getHp();
	this->_ep = ScavTrap::getEp();
	this->_damage = FragTrap::getDamage();
	std::cout << "DiamondTrap " << this->_name << " is created" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " is destroyed" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name << " is " << ClapTrap::getName() << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);
	return ;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
	return ;
}
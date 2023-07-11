/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:21:06 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/10 16:51:49 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{

	std::cout << "ScavTrap " << name << " created" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is in Guard Gate Mode" << std::endl;
}

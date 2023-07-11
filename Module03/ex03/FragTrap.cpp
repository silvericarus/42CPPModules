/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:53:11 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/11 20:53:11 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " is created" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is destroyed" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hp <(int)amount)
		amount = this->_hp;
	this->_hp -= amount;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " is repaired for " << amount << " points of health!" << std::endl;
	if ((int)(this->_hp + amount) < this->_hp)
		amount = ~this->_hp;
	this->_hp += amount;
	return ;
}

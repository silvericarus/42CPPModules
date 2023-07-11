/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:32:39 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 22:32:39 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_damage = 0;
	return ;
}

ClapTrap::~ClapTrap()
{
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hp < amount)
		amount = this->_hp;
	this->_hp -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of health!" << std::endl;
	if (this->_hp + amount < this->_hp)
		amount = ~this->_hp;
	this->_hp += amount;
	return ;
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

unsigned int	ClapTrap::getHp(void)
{
	return (this->_hp);
}

unsigned int	ClapTrap::getEp(void)
{
	return (this->_ep);
}

unsigned int	ClapTrap::getDamage(void)
{
	return (this->_damage);
}

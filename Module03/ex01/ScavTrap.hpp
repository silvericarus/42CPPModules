/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:20:29 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/10 16:51:44 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	
	public:
		explicit ScavTrap(std::string name) : ClapTrap(name){}
		explicit ~ScavTrap() : ~ClapTrap(){}
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
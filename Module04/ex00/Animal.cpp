/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:22:57 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 20:30:26 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->setType("EMPTY");
    std::cout << "an animal has appeared!" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "the animal disappeared!" << std::endl;
}

std::string Animal::getType()
{
    return (this->type);
}

void Animal::setType(std::string str)
{
   this->type = str; 
}

void Animal::makeSound()
{
    std::cout << "the animal made a sound!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, Animal const &animal )
{
    ostream << animal.getType();
    return (ostream);
}

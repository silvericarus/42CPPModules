/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:22:57 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 20:49:32 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->setType("EMPTY");
    std::cout << "an animal has appeared!" << std::endl;
    WrongAnimal::brain = new Brain();
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "the animal disappeared!" << std::endl;
    delete WrongAnimal::brain;
}

std::string WrongAnimal::getType()
{
    return (this->type);
}

void WrongAnimal::setType(std::string str)
{
   this->type = str; 
}

void WrongAnimal::makeSound()
{
    std::cout << "the animal made a sound!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, WrongAnimal const &animal )
{
    ostream << animal->getType();
    return (ostream);
}

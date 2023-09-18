/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:46:32 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 20:35:35 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    Animal::setType("DOG");
    std::cout << "a dog appeared!" << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << "the dog disappeared!" << std::endl;
}

std::string Dog::getType()
{
    return Animal::getType();
}

void    Dog::setType(std::string str)
{
    Animal::setType(str);
}

void    Dog::makeSound()
{
    std::cout << "the dog made a sound, woof!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, Dog const &dog )
{
    ostream << dog->getType();
    return (ostream);
}

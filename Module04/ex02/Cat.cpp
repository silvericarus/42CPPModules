/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:19:07 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 19:43:26 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    Animal& instance = Animal::getInstance();
    instance.setType("CAT");
    std::cout << "a cat appeared!" << std::endl;
    Cat::brain = new Brain();
    return ;
}

Cat::~Cat()
{
    std::cout << "the cat disappeared!" << std::endl;
    delete Cat::brain;
}

std::string Cat::getType()
{
    return Animal::getType();
}

void    Cat::setType(std::string str)
{
    Animal::setType(str);
}

void    Cat::makeSound()
{
    std::cout << "the cat made a sound, meow!" << std::endl;
}

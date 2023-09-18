/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:19:07 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 20:39:12 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    WrongAnimal::setType("CAT");
    std::cout << "a cat appeared!" << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "the cat disappeared!" << std::endl;
}

std::string WrongCat::getType()
{
    return WrongAnimal::getType();
}

void    WrongCat::setType(std::string str)
{
    WrongAnimal::setType(str);
}

void    WrongCat::makeSound()
{
    std::cout << "the cat made a sound, meow!" << std::endl;
}

std::ostream	&operator<<( std::ostream &ostream, WrongCat const &cat )
{
    ostream << cat->getType();
    return (ostream);
}

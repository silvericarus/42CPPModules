/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:33:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/08/08 18:08:44 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animal = new Animal();
    animal->brain->setIdea(0, "A random idea in an animal head!!!!!!!!!");
    std::cout << animal->brain->getIdea(0) << std::endl;
    return 0;
}
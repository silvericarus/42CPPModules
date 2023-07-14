/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:33:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/14 18:54:01 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    std::cout << j->getType() << std::endl;
    j->makeSound();
    meta->makeSound();
    delete meta;
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:16:09 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 19:34:57 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
        Animal();
    public:
        Brain *brain;
        ~Animal();
        Animal& getInstance();
        std::string getType();
        void    setType(std::string);
        virtual void    makeSound();
};

#endif
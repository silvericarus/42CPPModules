/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:15:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/08/03 18:24:29 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
class Cat : protected Animal
{
    protected:
        std::string type;
    public:
        Cat();
        ~Cat();
        std::string getType();
        void    setType(std::string);
        void    makeSound();
};

#endif
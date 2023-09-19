/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:15:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/19 21:10:48 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    protected:
        std::string type;
    public:
        Brain   *brain;
        WrongCat();
        ~WrongCat();
        WrongCat &operator=(const WrongCat &wrongcat);
        std::string getType();
        void    setType(std::string);
        void    makeSound();
};
std::ostream	&operator<<( std::ostream &ostream, WrongCat const &cat );
#endif

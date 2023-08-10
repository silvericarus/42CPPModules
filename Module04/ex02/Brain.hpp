/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:40:19 by albgonza          #+#    #+#             */
/*   Updated: 2023/08/08 18:07:23 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        std::string getIdea(int);
        void setIdea(int, std::string);
        std::string* getIdeas();
};
#endif
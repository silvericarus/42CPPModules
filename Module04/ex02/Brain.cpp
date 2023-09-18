/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:54:55 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/18 20:48:43 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    return ;
}

Brain::~Brain()
{
    return ;
}

std::string Brain::getIdea(int i)
{
    return (ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
    ideas[i] = idea;
}

std::string* Brain::getIdeas()
{
    return (ideas);
}

std::ostream	&operator<<( std::ostream &ostream, Brain const &brain )
{
    ostream << brain->getIdea(0);
    return (ostream);
}

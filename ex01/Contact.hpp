/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:40:00 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/16 19:54:49 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact
{
	public:
			Contact(int fields);
			Contact();
			void print(void);
			std::string	_field_id[5] = {"first name","last name","nickname","phone number","darkest secret"};

	private:
			std::string	_field_content[6];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 01:03:29 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/17 01:03:29 by albgonza         ###   ########.fr       */
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
			void	print(void);
			bool	is_empty(void);
			void	set_contact();
			static std::string	_field_id[5];
	private:
			std::string	_field_content[6];
};

#endif
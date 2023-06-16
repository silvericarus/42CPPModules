/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:58:35 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/16 23:58:35 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	set_command("ADD", 0);
	set_command("SEARCH", 1);
	set_command("EXIT", 2);
}

void	PhoneBook::set_command(std::string command, int index)
{
	PhoneBook::_commands[index] = command;
}

void	PhoneBook::identify_command(std::string command)
{
	if (command == PhoneBook::_commands[0])
		add_contact();
	else if (command == PhoneBook::_commands[1])
		search_contact();
	else if (command == PhoneBook::_commands[2])
		exit(0);
	else
		std::cout << "Invalid command" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	int i = 0;
	while (i < 8 && PhoneBook::_storage[i].is_empty() == false)
		i++;
	if (i == 8)
		std::cout << "PhoneBook is full" << std::endl;
	else
	{
		_storage[i].set_contact();
		std::cout << "Contact added" << std::endl;
	}
}

void	PhoneBook::search_contact(void)
{
	int i = 0;
	int index;
	std::string input;

	if (_storage[0].is_empty() == true)
		std::cout << "PhoneBook is empty" << std::endl;
	else
	{
		std::cout << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First Name" << "|";
		std::cout << std::setw(10) << "Last Name" << "|";
		std::cout << std::setw(10) << "Nickname" << std::endl;
		while (i < 8 && _storage[i].is_empty() == false)
		{
			std::cout << std::setw(10) << i << "|";
			_storage[i].print();
			i++;
		}
		std::cout << "Enter index: ";
		std::getline(std::cin, input);
		index = atoi(input.c_str());
		if (index >= 0 && index < 8 && _storage[index].is_empty() == false)
			print_contact(index);
		else
			std::cout << "Invalid index" << std::endl;
	}
}

void	PhoneBook::print_contact(int index)
{
	PhoneBook::_storage[index].print();
}

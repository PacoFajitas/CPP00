/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:33:29 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/26 22:10:55 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

void PhoneBook::AddContact(Contact *contact)
{
	if (_index == 8 || !_index)
		_index = 0;	
	contact->NewContact(&_contacts[_index]);
	_index++;
}

void PhoneBook::DisplayContacts(PhoneBook *PhoneBook)
{
	std::string str;
	
	
	for(int i = 0; i < 8; i++)
	{
	
		str = PhoneBook->_contacts[i].GetValue(&PhoneBook->_contacts[i], "firstName");
		if(str.length() < 1)
			break;
		std::cout << std::setw(10) << std::right << i << "| ";
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << str << "| ";
		str = PhoneBook->_contacts[i].GetValue(&PhoneBook->_contacts[i], "lastName");
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << str << "| ";
		str = PhoneBook->_contacts[i].GetValue(&PhoneBook->_contacts[i], "nickname");
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << str << "| ";
		std::cout << std::endl;
	}
}
void PhoneBook::initMyIndex(int value)
{
	_index = value;
}

void PhoneBook::SearchContact(PhoneBook *PhoneBook)
{
	std::string input;
	int index;
	
	std::cout << "Write the index of the contact you want to see" << std::endl;
	while (input.length() < 1)
	{
		if(!getline(std::cin, input))
		{
			std::cout << "End of input reached. Por bobo exiting..." << std::endl;
			exit(0);
		}		
	}
	if (input.length() > 1 || !isdigit(input[0]))
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	index = std::stoi(input);
	input = PhoneBook->_contacts[index].GetValue(&PhoneBook->_contacts[index], "firstName");
	if(input.length() < 1)
	{
		std::cout << "Contact not found" << std::endl;
		return;
	}
	std::cout << "First Name: " << PhoneBook->_contacts[index].GetValue(&PhoneBook->_contacts[index], "firstName") << std::endl;
	std::cout << "Last Name: " << PhoneBook->_contacts[index].GetValue(&PhoneBook->_contacts[index], "lastName") << std::endl;
	std::cout << "Nickname: " << PhoneBook->_contacts[index].GetValue(&PhoneBook->_contacts[index], "nickname") << std::endl;
	std::cout << "Phone Number: " << PhoneBook->_contacts[index].GetValue(&PhoneBook->_contacts[index], "phoneNumber") << std::endl;
	std::cout << "Darkest Secret: " << PhoneBook->_contacts[index].GetValue(&PhoneBook->_contacts[index], "darkestSecret") << std::endl;
}

PhoneBook::~PhoneBook()
{
}
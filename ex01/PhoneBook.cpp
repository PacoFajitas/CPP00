/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:16 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/26 13:47:49 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	
}

void	PhoneBook::SearchContact(PhoneBook *PhoneBook)
{
	std::string name;
	int			index;

	while (name.length() < 1)
	{
		name.erase();
		if (!std::getline(std::cin, name))
		{
			std::cout << "End of input reached. Exiting..." << std::endl;
			exit(0);		}
	}
	index = 0;
	while(index < 8)
	{
		if (PhoneBook->contacts[index].firstName == name)
		{
			PhoneBook->contacts[index].DisplayContact(&PhoneBook->contacts[index]);
			break ;
		}
		index++;
	}
	if (index == 8)
		std::cout << "Contact not found" << std::endl;
	return ;	
}
void	PhoneBook::DisplayContacts(PhoneBook *PhoneBook)
{
	std::string text;
	for (int i = 0; i < 8; i++)
	{
		if (PhoneBook->contacts[i].firstName.length() < 1)
			break ;
		text = PhoneBook->contacts[i].firstName;
		if(text.length() > 10)
			text = text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::left << text << "| ";
		text = PhoneBook->contacts[i].lastName;
		if(text.length() > 10)
			text = text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::left << text << "| ";
		text = PhoneBook->contacts[i].nickname;
		if(text.length() > 10)
			text = text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::left << text << "| ";
		text = PhoneBook->contacts[i].phoneNumber;
		if(text.length() > 10)
			text = text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::left << text << "| ";
		text = PhoneBook->contacts[i].darkestSecret;
		if(text.length() > 10)
			text = text.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::left << text << "| " ;
	}
	std::cout << std::endl;
			
}

void	PhoneBook::AddContact(PhoneBook *PhoneBook, Contact *contact)
{
	int	i = 0;
	
	contact->NewContact(contact);
	while (PhoneBook->contacts[i].firstName.length() > 0)
		i++;
	if (i < 8)
		PhoneBook->contacts[i] = *contact;
	else
	{
		i = 0;
		while (i < 7)
		{
			PhoneBook->contacts[i] = PhoneBook->contacts[i + 1];
			i++;
		}
		PhoneBook->contacts[7] = *contact;
	}	
}

PhoneBook::~PhoneBook()
{
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:10:29 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/26 13:34:40 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

std::string	Contact::FillContact(std::string printstr)
{
	std::string input;
	

	std::cout << std::setw(16) << std::left << printstr;
	while (input.length() < 1)
	{
		input.erase();
		if (!std::getline(std::cin, input))
			break ;
		
	}
	return (input);
}

void	Contact::DisplayContact(Contact *contact)
{
	std::cout << "First Name: " << contact->firstName << std::endl;
	std::cout << "Last Name: " << contact->lastName << std::endl;
	std::cout << "Nickname: " << contact->nickname << std::endl;
	std::cout << "Phone Number: " << contact->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << contact->darkestSecret << std::endl;
}


void	Contact::NewContact(Contact *contact)
{
	std::cout << "Please fill the information as asked below:" << std::endl;
	contact->firstName = FillContact("First Name: ");
	contact->lastName = FillContact("Last Name: ");
	contact->nickname = FillContact("Nickname: ");
	contact->phoneNumber = FillContact("Phone Number: ");
	contact->darkestSecret = FillContact("Darkest Secret: ");
	std::cout << contact->firstName << " " << contact->lastName << " " << contact->nickname << " " << contact->darkestSecret << std::endl;
	if (contact->firstName.length() < 1 || contact->lastName.length() < 1 || contact->nickname.length() < 1 || contact->darkestSecret.length() < 1)
	{
		std::cout << "Contact not saved, please fill all the fields" << std::endl;
		contact = NULL;
	}
}

Contact::~Contact()
{
	
}
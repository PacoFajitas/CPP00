/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:33:40 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/26 21:55:40 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

std::string Contact::GetValue(Contact *contact, std::string value)
{
	if (value == "firstName")
		return (contact->firstName);
	else if (value == "lastName")
		return (contact->lastName);
	else if (value == "nickname")
		return (contact->nickname);
	else if (value == "phoneNumber")
		return (contact->phoneNumber);
	else if (value == "darkestSecret")
		return (contact->darkestSecret);
	return ("");
}

std::string	Contact::FillContact(std::string printstr)
{
	std::string input;

	std::cout << printstr;
	while (input.length() < 1)
	{
		if(!getline(std::cin, input))
		{
			std::cout << "End of input reached. Por bobo exiting..." << std::endl;
			exit(0);
		}		
	}
	return (input);
}

void	Contact::NewContact(Contact *contact)
{
	contact->firstName = FillContact("First Name: ");
	contact->lastName = FillContact("Last Name: ");
	contact->nickname = FillContact("Nickname: ");
	contact->phoneNumber = FillContact("Phone Number: ");
	contact->darkestSecret = FillContact("Darkest Secret: ");
}
Contact::~Contact()
{
}
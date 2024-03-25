/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:10:29 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/25 23:10:29 by tfiguero         ###   ########.fr       */
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

void	Contact::NewContact(Contact *contact)
{
	std::cout << "Please fill the information as asked below:" << std::endl;
	contact->firstName = FillContact("First Name: ");
	contact->lastName = FillContact("Last Name: ");
	contact->nickname = FillContact("Nickname: ");
	contact->darkestSecret = FillContact("Darkest Secret: ");
	std::cout << contact->firstName << " " << contact->lastName << " " << contact->nickname << " " << contact->darkestSecret << std::endl;
	if (contact->firstName == "" || contact->lastName == "" || contact->nickname == "" || contact->darkestSecret == "")
		std::cout << "Contact not saved, please fill all the fields" << std::endl;
	else
		std::cout << "Contact saved" << std::endl;
}

Contact::~Contact()
{
	
}
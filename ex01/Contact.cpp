/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:10:29 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/23 21:43:34 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

std::string	Contact::FillContact(std::string printstr)
{
	std::string input;
	
	while (input.length() < 1)
	{
		input.erase();
		std::cout << printstr << std::endl;
		if (!std::getline(std::cin, input))
			break;
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
}

Contact::~Contact()
{
	
}
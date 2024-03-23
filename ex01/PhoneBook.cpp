/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:16 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/23 21:55:55 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	
}

void	PhoneBook::AddContact(Contact *contact)
{
	contact->NewContact(contact);
	
}

PhoneBook::~PhoneBook()
{
	
}
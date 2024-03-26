/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:25 by tfiguero         #+#    #+#             */
/*   Updated: 2024/03/23 21:45:50 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int	_index;
	public:
		PhoneBook();
		void AddContact(Contact *contact);
		void DisplayContacts(PhoneBook *PhoneBook);
		void SearchContact(PhoneBook *PhoneBook);
		void initMyIndex(int value);
		~PhoneBook();
};

#endif
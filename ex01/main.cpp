/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:08:14 by codespace         #+#    #+#             */
/*   Updated: 2024/03/23 21:44:17 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook phoneBook;
	Contact contact;

	std::cout << "Write ADD, SEARCH or EXIT" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phoneBook.AddContact(&contact);
		//else if (input == "SEARCH")
		//	phoneBook.SearchContact(contact);
	}
	return (0);
}
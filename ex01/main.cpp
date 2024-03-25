/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:08:14 by codespace         #+#    #+#             */
/*   Updated: 2024/03/25 23:09:36 by tfiguero         ###   ########.fr       */
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
		if (!(std::cin >> input)) {
            if (std::cin.eof()) {
                std::cout << "End of input reached. Exiting..." << std::endl;
            } else {
                std::cerr << "Error reading input. Exiting..." << std::endl;
            }
            break;
		}
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
		{
			phoneBook.AddContact(&contact);
		}
		//else if (input == "SEARCH")
		//	phoneBook.SearchContact(contact);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:08:14 by codespace         #+#    #+#             */
/*   Updated: 2024/03/26 22:07:28 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook phoneBook;
	Contact contact;

	phoneBook.initMyIndex(0);
	std::cout << "Write ADD, SEARCH or EXIT" << std::endl;
	while (true)
	{
		if (!getline(std::cin, input)) {
            if (std::cin.eof()) 
			{
                std::cout << "End of input reached. Por bobo exiting..." << std::endl;
            	break;
			}
		}
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phoneBook.AddContact(&contact);
		else if (input == "SEARCH")
		{
			phoneBook.DisplayContacts(&phoneBook);
			phoneBook.SearchContact(&phoneBook);
		}
		std::cout << "Write ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}

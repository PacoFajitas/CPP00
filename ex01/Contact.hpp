/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:40 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/26 22:02:44 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{		
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
	public:

		Contact();
		std::string GetValue(Contact *contact, std::string value);
		std::string	FillContact(std::string printstr);
		void		NewContact(Contact *contact);
		void		DisplayContact(Contact *contact);
		~Contact();
};

#endif
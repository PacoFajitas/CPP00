/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:09:40 by tfiguero          #+#    #+#             */
/*   Updated: 2024/03/25 23:07:36 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
		public:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
		Contact();
		std::string	FillContact(std::string printstr);
		void		NewContact(Contact *contact);
		~Contact();
};

#endif
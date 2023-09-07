/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:21 by lchew             #+#    #+#             */
/*   Updated: 2023/09/07 14:26:36 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	setFirstName(void);
		void	setLastName(void);
		void	setNickname(void);
		void	setPhoneNumber(void);
		void	setDarkestSecret(void);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};
#endif

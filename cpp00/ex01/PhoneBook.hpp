/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:25 by lchew             #+#    #+#             */
/*   Updated: 2023/09/07 14:28:53 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		addContact(void);
		void		searchContact(void);
		std::string truncate(std::string str);
		void		printContact(void);
		void		getIndex(void);

	private:
		Contact		_contact[8];
		static int	_index;
		static int	_contactCount;
		size_t 		_cellWidth;
		int			_phonebookSize;

};
#endif

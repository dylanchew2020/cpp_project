/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:02:58 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 20:45:37 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();
		void replaceLine(std::string s1, std::string s2);

	private:
		std::ifstream	_ifs;
		std::ofstream	_ofs;
		std::string		_line;
		std::size_t 	_found;
};

#endif

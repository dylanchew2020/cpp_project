/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:02:59 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 20:47:41 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	if (s1.empty())
	{
		std::cerr << "Error: Empty string s1" << std::endl;
		return ;
	}
	_ifs.open(filename.c_str(), std::ifstream::in);
	filename.append(".replace");
	_ofs.open(filename.c_str());
	if (!_ifs.is_open() || !_ofs.is_open())
	{
		std::cerr << "Error: File not found" << std::endl;
		return ;
	}
	_found = 0;
	while (std::getline(_ifs, _line))
		replaceLine(s1, s2);
}

Replace::~Replace()
{
	_ifs.close();
	if (_ifs.is_open())
		std::cerr << "Error: File not closed" << std::endl;
	_ofs.close();
	if (_ofs.is_open())
		std::cerr << "Error: File not closed" << std::endl;
}

void Replace::replaceLine(std::string s1, std::string s2)
{
	
	while (_found < _line.length())
	{
		_found = _line.find(s1, _found);
		if (_found != std::string::npos)
		{
			_line.erase(_found, s1.length());
			_line.insert(_found, s2);
			_found += s2.length();
		}
	}
	_ofs << _line << std::endl;
	_found = 0;
}

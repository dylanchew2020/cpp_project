/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:57:10 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 15:32:33 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	cout << "Brain constructor called" << endl;
	std::fill(_ideas, _ideas + 100, "Idea");
}

Brain::Brain(const Brain& brain)
{
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = brain._ideas[i];
		++i;
	}
	cout << "Brain copy constructor called" << endl;
}

Brain::~Brain(void)
{
	cout << "Brain destructor called" << endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		int i = 0;
		while (i < 100)
		{
			this->_ideas[i] = brain._ideas[i];
			++i;
		}
	}
	cout << "Brain assignment operator called" << endl;
	return (*this);
}

string Brain::getIdea(int index) const
{
	return (_ideas[index]);
}
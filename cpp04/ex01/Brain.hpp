/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:57:12 by lchew             #+#    #+#             */
/*   Updated: 2023/12/13 15:22:36 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& brain);
		~Brain(void);
		
		Brain& operator=(const Brain& brain);
		string getIdea(int index) const;
		
	private:
		string _ideas[100];
};

#endif
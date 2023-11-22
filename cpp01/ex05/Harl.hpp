/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:27:14 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/22 16:41:58 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <algorithm>

class Harl
{
	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		enum	e_level {DEBUG, INFO, WARNING, ERROR};
		const static int		_level[4];
};

#endif

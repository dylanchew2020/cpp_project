/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:27:14 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/26 19:31:30 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <algorithm>

class Harl
{
	public:
		Harl(void);
		~Harl(void);

		typedef enum	e_level {DEBUG, INFO, WARNING, ERROR} t_level;
		void	complain(std::string level);
		void	filter(int level);
		int		getLevelCode(std::string level);

	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
		void		(Harl::*_f[4])(void);
		std::string	_levels[4];
};

#endif

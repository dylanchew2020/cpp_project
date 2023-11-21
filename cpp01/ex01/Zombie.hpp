/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:17:04 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 13:56:07 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        std::string getName(void) const;
        void setName(std::string name);

    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif

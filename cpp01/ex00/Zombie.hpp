/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylanchew2020 <dylanchew2020@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:17:04 by dylanchew20       #+#    #+#             */
/*   Updated: 2023/11/21 11:58:07 by dylanchew20      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie( std::string name );
        ~Zombie( void );
        void announce( void );
        std::string getName( void ) const;

    private:
        std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:48:03 by lchew             #+#    #+#             */
/*   Updated: 2023/12/09 20:11:43 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A("A");
	ClapTrap B("B");


	A.attack("B");
	B.takeDamage(5);
	B.attack("A");
	A.takeDamage(10);
	A.beRepaired(5);
	B.attack("A");
	A.takeDamage(10);
	B.attack("A");
	A.takeDamage(5);

	B.beRepaired(5);
	B.attack("B");
	B.attack("B");
	B.attack("B");
	B.attack("B");
	B.attack("B");
	B.attack("B");
	cout << endl << "B's energy points: " << B.getEnergyPoints() << endl;
	B.attack("B");
	cout << endl << "B's energy points: " << B.getEnergyPoints() << endl;
	B.beRepaired(5);
	
	cout << endl << "A's energy points: " << A.getEnergyPoints() << endl;
	A.attack("B");
	A.beRepaired(10);
	A.attack("B");
	
	return (0);
}
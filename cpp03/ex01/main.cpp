/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:48:03 by lchew             #+#    #+#             */
/*   Updated: 2023/12/10 21:08:53 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "Creating ScavTrap 'Serena'" << std::endl;
    ScavTrap scav("Serena");

    // Test Guard Gate Mode
    std::cout << "\nTesting Guard Gate Mode:" << std::endl;
    scav.guardGate();

    // Test attacking
    std::cout << "\nTesting Attack:" << std::endl;
    scav.attack("Enemy1");
    scav.attack("Enemy2");
    scav.takeDamage(10);
    scav.beRepaired(5);

	// Test taking excessive damage
    std::cout << "\nTesting Excessive Damage:" << std::endl;
    scav.takeDamage(1000);

	// Test attach when dead
	std::cout << "\nTesting Attack when Dead:" << std::endl;
	scav.attack("Enemy");

	// Test repairing beyond init hit points
    std::cout << "\nTesting Repair with Depleted Energy:" << std::endl;
    scav.beRepaired(150);

    // Test energy depletion
    std::cout << "\nTesting Attack with Depleted Energy:" << std::endl;
	int i = 0;
	while (i < 55)
	{
		scav.attack("Enemy");
		i++;
	}

    // Test repairing with depleted energy
    std::cout << "\nTesting Repair with Depleted Energy:" << std::endl;
	scav.takeDamage(1000);
    scav.beRepaired(150);

	// Test taking damage when dead
	std::cout << "\nTesting Damage when Dead:" << std::endl;
	scav.takeDamage(10);

    // Checking final stats
    std::cout << "\nChecking Final Stats:" << std::endl;
    cout << "hp: " << scav.getHitpoints() << endl;
    cout << "energy: " << scav.getEnergyPoints() << endl;
    cout << "attack: " << scav.getAttackDamage() << endl;

    // Test destruction
    std::cout << "\nDestroying ScavTrap 'Serena':" << std::endl;
    // ScavTrap destructor called automatically here

    return 0;

	return (0);
}

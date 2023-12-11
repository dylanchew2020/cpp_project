/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:48:03 by lchew             #+#    #+#             */
/*   Updated: 2023/12/11 15:26:45 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
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

    // =========================================
    std::cout << "Creating FragTrap 'Fraggy'" << std::endl;
    FragTrap frag("Fraggy");
    
    // Test High Fives Guys
    std::cout << "\nTesting High Fives Guys:" << std::endl;
    frag.highFivesGuys();

    // Test attacking
    std::cout << "\nTesting Attack:" << std::endl;
    frag.attack("Enemy1");
    frag.attack("Enemy2");
    frag.takeDamage(10);
    frag.beRepaired(5);

    // Test taking excessive damage
    std::cout << "\nTesting Excessive Damage:" << std::endl;
    frag.takeDamage(1000);

    // Test attach when dead
    std::cout << "\nTesting Attack when Dead:" << std::endl;
    frag.attack("Enemy");

    // Test repairing beyond max hit points
    std::cout << "\nTesting Over-Repair:" << std::endl;
    frag.beRepaired(150);

    // Test energy depletion
    std::cout << "\nTesting Attack with Depleted Energy:" << std::endl;
    for (int i = 0; i < 101; i++) {
        frag.attack("Enemy");
    }

    // Test repairing with depleted energy
    std::cout << "\nTesting Repair with Depleted Energy:" << std::endl;
    frag.takeDamage(1000);
    frag.beRepaired(150);

    // Test taking damage when dead
    std::cout << "\nTesting Damage when Dead:" << std::endl;
    frag.takeDamage(10);

    // Checking final stats
    std::cout << "\nChecking Final Stats:" << std::endl;
    std::cout << "hp: " << frag.getHitpoints() << std::endl;
    std::cout << "energy: " << frag.getEnergyPoints() << std::endl;
    std::cout << "attack: " << frag.getAttackDamage() << std::endl;

    // Test destruction
    std::cout << "\nDestroying ScavTrap & FragTrap" << std::endl;
    // FragTrap destructor called automatically here

    return 0;
}

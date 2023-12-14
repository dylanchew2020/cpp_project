/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:03:37 by lchew             #+#    #+#             */
/*   Updated: 2023/12/14 13:33:16 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
	
// 	ICharacter* bob = new Character("bob");
	
// 	me->use(0, *bob);
// 	me->use(1, *bob);
	
// 	delete bob;
// 	delete me;
// 	delete src;
	
// 	return 0;
// }


int main()
{
    // Create materia source and learn materias
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Create characters
    ICharacter* alice = new Character("Alice");
    ICharacter* bob = new Character("Bob");
    ICharacter* charlie = new Character("Charlie");

    // Equip Alice with ice and cure materias
    for (int i = 0; i < 4; ++i)
    {
        alice->equip(src->createMateria(i % 2 == 0 ? "ice" : "cure"));
    }

    // Equip Bob with ice materias
    for (int i = 0; i < 4; ++i)
    {
        bob->equip(src->createMateria("ice"));
    }

    // Equip Charlie with cure materias
    for (int i = 0; i < 4; ++i)
    {
        charlie->equip(src->createMateria("cure"));
    }

    // Alice uses materias on Bob and Charlie
    for (int i = 0; i < 4; ++i)
    {
        alice->use(i, *bob);
        alice->use(i, *charlie);
    }

    // Bob uses all his materias on Alice
    for (int i = 0; i < 4; ++i)
    {
        bob->use(i, *alice);
    }

    // Charlie uses all his materias on Bob
    for (int i = 0; i < 4; ++i)
    {
        charlie->use(i, *bob);
    }

    // Testing unequip and reequip
	AMateria* floor = (dynamic_cast<Character*>(alice))->getSlot(2);
    alice->unequip(2);
    alice->equip(src->createMateria("ice"));
    alice->use(2, *charlie);
	delete floor;

    // Showcasing deep copy in action
    Character* dave = new Character(*dynamic_cast<Character*>(alice));
    dave->use(0, *charlie);
    dave->use(1, *bob);

    // Clean up
    delete alice;
    delete bob;
    delete charlie;
    delete dave;
    delete src;

	system("leaks amateria");
    return 0;
}

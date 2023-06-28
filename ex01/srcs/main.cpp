/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:33:28 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/28 17:45:16 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)	{
	ClapTrap	shanley("Shanley");
	ClapTrap	nicolazic("Nicolazic");
	ScavTrap	augustin("Augustin The Big Back");
	
	std::cout << std::endl;
	shanley.attack("Nicolazic");
	nicolazic.takeDamage(shanley.getAttack());
	std::cout << nicolazic.getName() << " has " << nicolazic.getHealth() << " health point(s) left." << std::endl;
	shanley.attack("Nicolazic");
	std::cout << nicolazic.getName() << " is crying." << std::endl;
	nicolazic.beRepaired(2);
	std::cout << shanley.getName() << " try with his other hand." << std::endl;
	shanley.setAttack(10);
	shanley.attack("Nicolazic");
	nicolazic.takeDamage(shanley.getAttack());
	std::cout << "BUT " << augustin.getName() << " appear and join the fight !" << std::endl;
	augustin.attack(shanley.getName());
	shanley.takeDamage(augustin.getAttack());
	augustin.guardGate();
	std::cout << "Fight aborted, cause of pain.\n" << std::endl;
	std::cout << "Claptrap " << shanley.getName() << " has " << shanley.getHealth() << " Health, " << shanley.getStamina() << " Stamina, and " << shanley.getAttack() << " attack damage." << std::endl;
	std::cout << "Claptrap " << nicolazic.getName() << " has " << nicolazic.getHealth() << " Health, " << nicolazic.getStamina() << " Stamina, and " << nicolazic.getAttack() << " attack damage." << std::endl;
	std::cout << "Scavtrap " << augustin.getName() << " has " << augustin.getHealth() << " Health, " << augustin.getStamina() << " Stamina, and " << augustin.getAttack() << " attack damage." << std::endl;
	std::cout << std::endl;
	
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:33:28 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/28 16:28:51 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)	{
	ClapTrap	shanley("Shanley");
	ClapTrap	nicolazic("Nicolazic");
	
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
	std::cout << "Fight aborted, cause of pain." << std::endl;
	std::cout << "Claptrap " << shanley.getName() << " has " << shanley.getHealth() << " Health, " << shanley.getStamina() << " Stamina, and " << shanley.getAttack() << " attack damage." << std::endl;
	std::cout << "Claptrap " << nicolazic.getName() << " has " << nicolazic.getHealth() << " Health, " << nicolazic.getStamina() << " Stamina, and " << nicolazic.getAttack() << " attack damage." << std::endl;
	
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:46:16 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/28 17:48:01 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)	{
	this->_health = 100;
	this->_stamina = 50;
	this->_attack = 20;
	std::cout << "ScavTrap " << name << " is born !" << std::endl;

	return ;
}

ScavTrap::ScavTrap(const ScavTrap & src): ClapTrap(src.getName(), src.getHealth(), src.getStamina(), src.getAttack())	{
	std::cout << "Scavtrap copy constructor called." << std::endl;

	return;
}

ScavTrap::~ScavTrap()	{
	std::cout << "ScavTrap " << this->getName() << " turned back into a ClapTrap." << std::endl;

	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap & src)	{
	_name = src.getName();
	_health = src.getHealth();
	_stamina = src.getStamina();
	_attack = src.getAttack();
	return (*this);
}

void	ScavTrap::guardGate()	{
	std::cout << "ScavTrap " << this->getName() << " turned in Gate Keeper Mode." << std::endl;

	return;
}

void	ScavTrap::attack(const std::string & target)	{
	if (_stamina > 0)	{
		if (_health != 0)	{
			std::cout << "ScavTrap " << this->getName() << " hit " << target << " with his wheel." << std::endl;
			_stamina -= 1;
		}
		else	{
			std::cout << "No health point left." << std::endl;
		}
	}
	else	{
		std::cout << "Not enought stamina left." << std::endl;
	}

	return;
}
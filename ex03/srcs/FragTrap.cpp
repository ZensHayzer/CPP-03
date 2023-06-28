/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:28:53 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/28 17:51:52 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)	{
	this->_health = 100;
	this->_stamina = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << name << " is born !" << std::endl;
	
	return;
}

FragTrap::FragTrap(const FragTrap & src): ClapTrap(src.getName(), src.getHealth(), src.getStamina(), src.getAttack())	{
	std::cout << "FragTrap copy constructor called." << std::endl;

	return;
}

FragTrap::~FragTrap()	{
	std::cout << "FragTrap " << this->getName() << " turned back into a ClapTrap." << std::endl;
	
	return;
}

FragTrap & FragTrap::operator=(const FragTrap & src)	{
	_name = src.getName();
	_health = src.getHealth();
	_stamina = src.getStamina();
	_attack = src.getAttack();

	return *this;
}

void	FragTrap::highFivesGuys()	{
	std::cout << "FragTrap " << this->getName() << " ask for High Five !" << std::endl;
	
	return;
}
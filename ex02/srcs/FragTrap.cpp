/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:28:53 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/25 14:09:25 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Mireille")	{
	this->_health = 100;
	this->_stamina = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << _name << " is born !" << std::endl;
	
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)	{
	this->_health = 100;
	this->_stamina = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << name << " is born !" << std::endl;
	
	return;
}

FragTrap::FragTrap(const FragTrap & src)	{
	std::cout << "FragTrap copy constructor called." << std::endl;
	if (this != &src)
		*this = src;

	return;
}

FragTrap::~FragTrap()	{
	std::cout << "FragTrap " << this->getName() << " turned back into a ClapTrap." << std::endl;
	
	return;
}

FragTrap & FragTrap::operator=(const FragTrap & src)	{
	if (this != &src)	{
		_name = src.getName();
		_health = src.getHealth();
		_stamina = src.getStamina();
		_attack = src.getAttack();
	}
	return *this;
}

void	FragTrap::highFivesGuys()	{
	std::cout << "FragTrap " << this->getName() << " ask for High Five !" << std::endl;
	
	return;
}
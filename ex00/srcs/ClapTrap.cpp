/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:34:36 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/25 13:50:39 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Robert"), _health(10), _stamina(10), _attack(0)	{
	std::cout << "Claptrap " << _name << " is born." << std::endl;
	
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _stamina(10), _attack(0)	{
	std::cout << "Claptrap " << name << " is born." << std::endl;
	
	return;
}

ClapTrap::ClapTrap(const ClapTrap & src)	{
	if (this != &src)
		*this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap & src)	{
	if (this != &src)	{
		_name = src.getName();
		_health = src.getHealth();
		_stamina = src.getStamina();
		_attack = src.getAttack();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)	{
	std::cout << _name << " got destroyed." << std::endl;
}

std::string	ClapTrap::getName(void) const	{
	return _name;
}

unsigned int	ClapTrap::getHealth(void) const	{
	return _health;
}

unsigned int	ClapTrap::getStamina(void) const	{
	return _stamina;
}

unsigned int	ClapTrap::getAttack(void) const	{
	return _attack;
}

void	ClapTrap::setAttack(unsigned int attack)	{
	_attack = attack;
}

void	ClapTrap::attack(const std::string & target)	{
	if (_stamina > 0)	{
		if (_health != 0)	{
			std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attack << " point(s) of damage !" << std::endl;
			_stamina -= 1;
		}
		else	{
			std::cout << "No health point left." << std::endl;
		}
	}
	else	{
		std::cout << "Not enought stamina left." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)	{
	if (_health <= amount)
		_health = 0;
	else
		_health -= amount;
	std::cout << "Claptrap " << _name << " lose " << amount << " health point(s) !" << std::endl;

	return;
}

void	ClapTrap::beRepaired(unsigned int amount)	{
	if (_stamina > 0)	{
		if (_health != 0)	{
			_health += amount;
			_stamina -= 1;
			std::cout << "Claptrap " << _name << " get repaired, healing " << amount << " health point(s) !" << std::endl;
		}
		else	{
			std::cout << "No health point left." << std::endl;
		}
	}
	else	{
		std::cout << "Not enought stamina left." << std::endl;
	}
}

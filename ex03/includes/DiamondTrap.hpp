/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:03:23 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/25 14:17:42 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap	{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & src);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap & src);

		std::string	getName() const;

		void	whoAmI();
		void	attack(const std::string & target);

	private:
		std::string	_name;
	
};

#endif
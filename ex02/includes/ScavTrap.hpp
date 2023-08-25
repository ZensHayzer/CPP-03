/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:44:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/25 14:09:58 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap	{
	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap();
		
		ScavTrap &operator=(const ScavTrap & src);

		void	guardGate();
		void	attack(const std::string & target);
		
	private:
	
};

#endif
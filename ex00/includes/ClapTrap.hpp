/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:35:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/25 13:50:04 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap	{

		public:
			
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap & src);
			~ClapTrap(void);
			
			ClapTrap &operator=(const ClapTrap & src);

			std::string		getName(void) const;
			unsigned int	getHealth(void) const;
			unsigned int	getStamina(void) const;
			unsigned int	getAttack(void) const;
			
			void			setAttack(unsigned int attack);

			void			attack(const std::string & target);
			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amount);

		private:

			std::string		_name;
			unsigned int	_health;
			unsigned int	_stamina;
			unsigned int	_attack;
	
};

#endif
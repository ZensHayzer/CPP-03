/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:27:31 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/28 17:51:15 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap	{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap & src);
		~FragTrap();
		
		FragTrap &operator=(const FragTrap & src);

		void	highFivesGuys(void);

	private:
	
};

#endif
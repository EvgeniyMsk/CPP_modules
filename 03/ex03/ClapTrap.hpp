/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:03:14 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:24:18 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
public:
	int			hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	std::string	name;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			armorDamageReduction;
	std::string	type;
public:
	ClapTrap();
	ClapTrap(std::string newName);
	~ClapTrap();
	ClapTrap(ClapTrap const &claptrap);
	ClapTrap 	&operator=(ClapTrap const &claptrap);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer();
	std::string	getInfo() const;
};
	std::ostream	&operator<<(std::ostream &os, const ClapTrap &value);
#endif
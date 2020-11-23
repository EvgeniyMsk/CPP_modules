/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:03:14 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:05:13 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>

class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(std::string newName);
	~ScavTrap();
	ScavTrap(ScavTrap const &scavtrap);
	ScavTrap 	&operator=(ScavTrap const &scavtrap);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer();
	std::string	getInfo() const;
};
	std::ostream	&operator<<(std::ostream &os, const ScavTrap &value);
#endif
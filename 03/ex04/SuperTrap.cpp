/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:01:49 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 21:36:49 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	name = "Qsymond";
	meleeAttackDamage = 60;
	rangedAttackDamage = 20;
	armorDamageReduction = 0;
	type = "[SuperTrap]";
	std::cout << type + " <" << name << "> was created!" << std::endl;
}

SuperTrap::SuperTrap(std::string newName)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	name = newName;
	meleeAttackDamage = 60;
	rangedAttackDamage = 20;
	armorDamageReduction = 0;
	type = "[SuperTrap]";
	std::cout << type + " <" << name << "> was created!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "[SuperTrap] <" << name << "> was destroyed!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &supertrap)
{
	std::cout << "[SuperTrap] Copy constructor called!" << std::endl;
	(*this) = supertrap;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &supertrap)
{
	std::cout << "[SuperTrap] Assignation operator called!" << std::endl;
	hitPoints = supertrap.hitPoints;
	maxHitPoints = supertrap.maxHitPoints;
	energyPoints = supertrap.energyPoints;
	maxEnergyPoints = supertrap.maxEnergyPoints;
	level = supertrap.level;
	name = supertrap.name;
	meleeAttackDamage = supertrap.meleeAttackDamage;
	rangedAttackDamage = supertrap.rangedAttackDamage;
	armorDamageReduction = supertrap.armorDamageReduction;
	type = "[SuperTrap]";
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
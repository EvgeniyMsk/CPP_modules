/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:43:25 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:30:53 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = "Qsymond";
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	type = "[SCAV-TP]";
	std::cout << "[SCAV-TP] <" << name << "> was created!" << std::endl;
}

ScavTrap::ScavTrap(std::string	newName)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = newName;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	type = "[SCAV-TP]";
	std::cout << "[SCAV-TP] <" << name << "> was created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[SCAV-TP] <" << name << "> was destroyed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap)
{
	std::cout << "[SCAV-TP] Copy constructor called!" << std::endl;
	(*this) = scavtrap;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
	std::cout << "[SCAV-TP] Assignation operator called!" << std::endl;
	hitPoints = scavtrap.hitPoints;
	maxHitPoints = scavtrap.maxHitPoints;
	energyPoints = scavtrap.energyPoints;
	maxEnergyPoints = scavtrap.maxEnergyPoints;
	level = scavtrap.level;
	name = scavtrap.name;
	meleeAttackDamage = scavtrap.meleeAttackDamage;
	rangedAttackDamage = scavtrap.rangedAttackDamage;
	armorDamageReduction = scavtrap.armorDamageReduction;
	type = "[SCAV-TP]";
	return (*this);
}

void			ScavTrap::challengeNewcomer()
{
	std::string	challenges[] = 
	{
		"Fire in the holl!",
		"Roger that!",
		"You take a point!",
		"Get out, she's gonna blow!",
		"Hold this position!",
		"Taking fire, need assistance!",
		"Enemy spotted!",
		"Enemy down!",
		"Stick together, team!"
	};
	srand(time(0));
	int i = rand() % 9;
	std::cout << type + " <" << name << ">: " << challenges[i] << std::endl;
}

std::string		ScavTrap::getInfo() const
{	
	return ("Type: \t\t\t[SCAV-TP]\nName: \t\t\t" + name + "\n"
			"Hit points: \t\t" + std::to_string(hitPoints) + "\n"
			"Max hit points: \t" + std::to_string(maxHitPoints) + "\n"
			"Energy points: \t\t" + std::to_string(energyPoints) + "\n"
			"Max energy points: \t" + std::to_string(maxEnergyPoints) + "\n"
			"Level: \t\t\t" + std::to_string(level) + "\n"
			"Melee attack damage: \t" + std::to_string(meleeAttackDamage) + "\n"
			"Ranged attack damage: \t" + std::to_string(rangedAttackDamage) + "\n"
			"Armor damage reduction: " + std::to_string(armorDamageReduction));
}
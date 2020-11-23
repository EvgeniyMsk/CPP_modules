/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:03:12 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:26:13 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	name = "Qsymond";
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	type = "[SCAV-TP]";
	std::cout << "[SCAV-TP] <" << name << "> was created!" << std::endl;
}

ScavTrap::ScavTrap(std::string	newName)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	name = newName;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
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

void			ScavTrap::rangedAttack(std::string const &target)
{
	if (hitPoints - rangedAttackDamage < 0)
	{
		std::cout << type + " " + name + " Not enouth hit points!" << std::endl;
		return;
	} else
	{
		hitPoints -= rangedAttackDamage;
		std::cout << type + " <" << name << "> attacks <" << target << "> at range, causing " << rangedAttackDamage << " points of damage!" << std::endl; 
	}
}

void			ScavTrap::meleeAttack(std::string const &target)
{
	if (hitPoints - meleeAttackDamage < 0)
	{
		std::cout << type + " " + name + " Not enouth hit points!" << std::endl;
		return ;
	} else
	{
		hitPoints -= meleeAttackDamage;
		std::cout << type + " <" << name << "> attacks <" << target << "> at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
	}
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	int result = amount/armorDamageReduction;
	energyPoints -= result;
	energyPoints = energyPoints < 0 ? 0 : energyPoints;
	if (armorDamageReduction > 1)
		armorDamageReduction--;
	std::cout << type + " <" << name << "> took damage, taking " << result << " points of damage! Energy points: " << energyPoints << ". Armor damage reduction: "<< armorDamageReduction << std::endl;
	
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	energyPoints += amount;
	if (energyPoints > maxEnergyPoints)
		energyPoints = maxEnergyPoints;
	std::cout << type + " <" << name << "> was repired, on " << amount << " points! Energy points: " << energyPoints << std::endl;
}

std::string		ScavTrap::getInfo() const
{	
	return ("Type: \t\t\t" + type + "\nName: \t\t\t" + name + "\n"
			"Hit points: \t\t" + std::to_string(hitPoints) + "\n"
			"Max hit points: \t" + std::to_string(maxHitPoints) + "\n"
			"Energy points: \t\t" + std::to_string(energyPoints) + "\n"
			"Max energy points: \t" + std::to_string(maxEnergyPoints) + "\n"
			"Level: \t\t\t" + std::to_string(level) + "\n"
			"Melee attack damage: \t" + std::to_string(meleeAttackDamage) + "\n"
			"Ranged attack damage: \t" + std::to_string(rangedAttackDamage) + "\n"
			"Armor damage reduction: " + std::to_string(armorDamageReduction));
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

std::ostream	&operator<<(std::ostream &os, const ScavTrap &value)
{
	os << value.getInfo();
	return (os);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:03:12 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:11:55 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
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
	type = "[CLAP-TP]";
	std::cout << "[CLAP-TP] <" << name << "> was created!" << std::endl;
}

ClapTrap::ClapTrap(std::string	newName)
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
	type = "[CLAP-TP]";
	std::cout << "[CLAP-TP] <" << name << "> was created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[CLAP-TP] <" << name << "> was destroyed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	std::cout << "[CLAP-TP] Copy constructor called!" << std::endl;
	(*this) = claptrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
	std::cout << "[CLAP-TP] Assignation operator called!" << std::endl;
	hitPoints = claptrap.hitPoints;
	maxHitPoints = claptrap.maxHitPoints;
	energyPoints = claptrap.energyPoints;
	maxEnergyPoints = claptrap.maxEnergyPoints;
	level = claptrap.level;
	name = claptrap.name;
	meleeAttackDamage = claptrap.meleeAttackDamage;
	rangedAttackDamage = claptrap.rangedAttackDamage;
	armorDamageReduction = claptrap.armorDamageReduction;
	type = "[CLAP-TP]";
	return (*this);
}

void			ClapTrap::rangedAttack(std::string const &target)
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

void			ClapTrap::meleeAttack(std::string const &target)
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

void			ClapTrap::takeDamage(unsigned int amount)
{
	int result = amount/armorDamageReduction;
	energyPoints -= result;
	energyPoints = energyPoints < 0 ? 0 : energyPoints;
	if (armorDamageReduction > 1)
		armorDamageReduction--;
	std::cout << type + " <" << name << "> took damage, taking " << result << " points of damage! Energy points: " << energyPoints << ". Armor damage reduction: "<< armorDamageReduction << std::endl;
	
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	energyPoints += amount;
	if (energyPoints > maxEnergyPoints)
		energyPoints = maxEnergyPoints;
	std::cout << type + " <" << name << "> was repired, on " << amount << " points! Energy points: " << energyPoints << std::endl;
}

std::string		ClapTrap::getInfo() const
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

void			ClapTrap::challengeNewcomer()
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

std::ostream	&operator<<(std::ostream &os, const ClapTrap &value)
{
	os << value.getInfo();
	return (os);
}
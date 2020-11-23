/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:14:47 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:20:53 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
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
	std::cout << "[FR4G-TP] <" << name << "> was created!" << std::endl;
}

FragTrap::FragTrap(std::string	newName)
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
	std::cout << "[FR4G-TP] <" << name << "> was created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FR4G-TP] <" << name << "> was destroyed!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	std::cout << "[FR4G-TP] Copy constructor called!" << std::endl;
	(*this) = fragtrap;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "[FR4G-TP] Assignation operator called!" << std::endl;
	hitPoints = fragtrap.hitPoints;
	maxHitPoints = fragtrap.maxHitPoints;
	energyPoints = fragtrap.energyPoints;
	maxEnergyPoints = fragtrap.maxEnergyPoints;
	level = fragtrap.level;
	name = fragtrap.name;
	meleeAttackDamage = fragtrap.meleeAttackDamage;
	rangedAttackDamage = fragtrap.rangedAttackDamage;
	armorDamageReduction = fragtrap.armorDamageReduction;
	type = "[FR4G-TP]";
	return (*this);
}


void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{	
	srand( time(0) );
	int i = rand() % 2;
	if (energyPoints >= 25)
	{
		energyPoints -= 25;
		std::cout << "[FR4G-TP] <" << name << "> is doing something random ... ";
		std::cout << "Energy Points: " << energyPoints << std::endl;
		void (FragTrap::*ptr[])(std::string const &) =
		{
			&FragTrap::meleeAttack,
			&FragTrap::rangedAttack
		};
		(this->*ptr[i])(target);
	}
	else
		std::cout << "FR4G-TP " << name << " is out of battery" << std::endl;
}

std::string		FragTrap::getInfo() const
{	
	return ("Type: \t\t\t[FR4G-TP]\nName: \t\t\t" + name + "\n"
			"Hit points: \t\t" + std::to_string(hitPoints) + "\n"
			"Max hit points: \t" + std::to_string(maxHitPoints) + "\n"
			"Energy points: \t\t" + std::to_string(energyPoints) + "\n"
			"Max energy points: \t" + std::to_string(maxEnergyPoints) + "\n"
			"Level: \t\t\t" + std::to_string(level) + "\n"
			"Melee attack damage: \t" + std::to_string(meleeAttackDamage) + "\n"
			"Ranged attack damage: \t" + std::to_string(rangedAttackDamage) + "\n"
			"Armor damage reduction: " + std::to_string(armorDamageReduction));
}
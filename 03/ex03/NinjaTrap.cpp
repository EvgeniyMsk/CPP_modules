/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:14:44 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 21:37:43 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
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
	type = "[NINJA-TP]";
	std::cout << "[NINJA-TP] <" << name << "> was created!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string	newName)
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
	type = "[NINJA-TP]";
	std::cout << "[NINJA-TP] <" << name << "> was created!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "[NINJA-TP] <" << name << "> was destroyed!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjatrap)
{
	std::cout << "[NINJA-TP] Copy constructor called!" << std::endl;
	(*this) = ninjatrap;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &ninjatrap)
{
	std::cout << "[NINJA-TP] Assignation operator called!" << std::endl;
	hitPoints = ninjatrap.hitPoints;
	maxHitPoints = ninjatrap.maxHitPoints;
	energyPoints = ninjatrap.energyPoints;
	maxEnergyPoints = ninjatrap.maxEnergyPoints;
	level = ninjatrap.level;
	name = ninjatrap.name;
	meleeAttackDamage = ninjatrap.meleeAttackDamage;
	rangedAttackDamage = ninjatrap.rangedAttackDamage;
	armorDamageReduction = ninjatrap.armorDamageReduction;
	type = "[NINJA-TP]";
	return (*this);
}

void			NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << type + " " + name + " Calling ninjaShoebox for [ClapTrap] " + target.name + "!" << std::endl;
	this->meleeAttack(target.name);
	target.takeDamage(this->meleeAttackDamage);
}

void			NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << type + " " + name + " Calling ninjaShoebox for [FragTrap] " + target.name + "!" << std::endl;
	this->meleeAttack(target.name);
	target.takeDamage(this->meleeAttackDamage);
}

void			NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << type + " " + name + " Calling ninjaShoebox for [ScavTrap] " + target.name + "!" << std::endl;
	this->rangedAttack(target.name);
	target.takeDamage(this->rangedAttackDamage);
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << type + " " + name + " Calling ninjaShoebox for [NinjaTrap] " + target.name + "!" << std::endl;
	this->rangedAttack(target.name);
	target.takeDamage(this->rangedAttackDamage);
}
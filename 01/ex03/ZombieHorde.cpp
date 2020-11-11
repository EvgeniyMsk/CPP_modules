/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:12:46 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 20:36:02 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	std::string	names[10] = 
	{
		"Tom",
		"Jerry",
		"Linkoln",
		"John",
		"Roger",
		"Sherry",
		"Michael",
		"Josh",
		"Linda",
		"Sarah"
	};
	std::string	types[4] = 
	{
		"Without Leg",
		"Without Arm",
		"Without Head",
		"Without Brain"
	};
	srand((unsigned) time(0));
	this->zombies = new Zombie[n];
	for (this->amount = 0; this->amount < n; this->amount++)
		this->zombies[this->amount].setTypeName(names[std::rand() % 10], types[std::rand() % 4]);
}

ZombieHorde::~ZombieHorde()
{
	delete[] (this->zombies);
	std::cout << "Horde is dead." << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->amount; i++)
		this->zombies[i].announce();
}

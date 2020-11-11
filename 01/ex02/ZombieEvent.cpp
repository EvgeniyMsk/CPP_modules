/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:50:42 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 16:38:28 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "Without Leg";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string newType){
	this->type = newType;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	return new Zombie(name, this->type);
}

Zombie	*ZombieEvent::randomChump()
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
	srand((unsigned) time(0));
	return new Zombie(names[std::rand() % 10], this->type);
}
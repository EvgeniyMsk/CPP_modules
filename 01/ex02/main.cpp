/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:43:02 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 16:38:36 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie		*zombieRandom;
	Zombie		*zombie;
	ZombieEvent	zombieEvent;

	zombieRandom = zombieEvent.randomChump();
	zombieRandom->announce();
	delete(zombieRandom);
	zombieEvent.setZombieType("Without head");
	zombie = zombieEvent.newZombie("Dzhambot");
	zombie->announce();
	delete(zombie);
	return (0);
}
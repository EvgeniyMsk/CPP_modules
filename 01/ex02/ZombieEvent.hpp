/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:50:54 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 16:38:26 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	type;
	
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string newType);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();
};

#endif
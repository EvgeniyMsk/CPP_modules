/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:34:25 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 16:38:23 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string newName, std::string newType)
{
	setTypeName(newName, newType);
}

Zombie::~Zombie()
{
	std::cout << "Zombie has died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" + this->name + " (" + type + ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setTypeName(std::string newName, std::string newType)
{
	this->name = newName;
	this->type = newType;
}

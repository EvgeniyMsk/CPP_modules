/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 22:03:56 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 22:20:31 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy)
{
	*this = copy;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &supermutant)
{
	type = supermutant.type;
	hp = supermutant.hp;
	return (*this);
}


void	SuperMutant::takeDamage(int damage)
{
	int	result = hp - damage + 3;
	hp = result < 0 ? 0 : result;
}
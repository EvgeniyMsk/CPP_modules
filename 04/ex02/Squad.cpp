/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:33:27 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/29 18:09:44 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	count = 0;
	units = nullptr;
}

Squad::Squad(Squad const &copy) :
	count(0), units(nullptr)
{
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad &Squad::operator=(Squad const &squad)
{
	if (units)
	{
		for (int i = 0; i < count; i++)
			delete units[i];
		delete[] units;
		units = nullptr;
	}
	count = 0;
	for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad()
{
	if (units)
	{
		for (int i = 0; i < count; i++)
			delete units[i];
		delete[] units;
	}
}

int Squad::getCount() const
{
	return (count);
}

ISpaceMarine *Squad::getUnit(int number) const
{
	return (number < 0 || count == 0 || number >= count) ? nullptr : units[number];
}

int Squad::push(ISpaceMarine *ispacemarine)
{
	if (!ispacemarine)
		return (count);
	if (ispacemarine)
	{
		for (int i = 0; i < this->count; i++)
			if (units[i] == ispacemarine)
				return (count);
		ISpaceMarine **container = new ISpaceMarine*[count + 1];
		for (int i = 0; i < count; i++)
			container[i] = units[i];
		delete[] units;
		container[count] = ispacemarine;
		count++;
		units = container;
	}
	else
	{
		units = new ISpaceMarine*[1];
		units[0] = ispacemarine;
		count = 1;
	}
	return (count);
}
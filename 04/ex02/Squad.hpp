/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:43:54 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/29 17:33:25 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int		count;
	ISpaceMarine **units;
public:
	Squad();
	Squad(Squad const &copy);
	Squad &operator=(Squad const &squad);
	virtual ~Squad();
	int getCount() const;
	ISpaceMarine *getUnit(int number) const;
	int push(ISpaceMarine *ispacemarine);
};

#endif
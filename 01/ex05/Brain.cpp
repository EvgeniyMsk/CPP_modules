/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 23:31:57 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/12 10:57:18 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::stringstream str;
	str << this;
	this->address = str.str();
}

Brain::~Brain()
{
}

std::string Brain::identify()
{
	return this->address;
}
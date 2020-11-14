/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 10:48:40 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/12 10:57:21 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

Brain		Human::getBrain()
{
	return (this->brain);
}

std::string	Human::identify()
{
	return this->getBrain().identify();
}
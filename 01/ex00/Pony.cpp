/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:39:09 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 13:44:34 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Pony was created!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony was destroyed!" << std::endl;
}

void	Pony::function1()
{
	std::cout << "Launching function1" << std::endl;
}

void	Pony::function2()
{
	std::cout << "Launching function2" << std::endl;
}
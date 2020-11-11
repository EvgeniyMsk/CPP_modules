/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:43:02 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 20:35:54 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde *zombiehorde;
	zombiehorde = new ZombieHorde(10);
	zombiehorde->announce();
	return (0);
}
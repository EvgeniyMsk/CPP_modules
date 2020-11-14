/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 23:31:32 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/12 10:57:24 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human human;
	std::cout << human.identify() << std::endl;
	std::cout << human.getBrain().identify() << std::endl;
	return (0);
}
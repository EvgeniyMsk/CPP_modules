/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:40:58 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 15:32:29 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony();
	pony->function1();
	pony->function2();
	delete	pony;
}

void	ponyOnTheStack()
{
	Pony pony;
	pony.function1();
	pony.function2();
}

int		main(void)
{
	std::cout << "Pony on the Heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Pony on the Stack" << std::endl;
	ponyOnTheStack();
	return (0);
}
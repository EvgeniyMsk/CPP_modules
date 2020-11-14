/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:37:41 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 23:15:32 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string	*pointer = &myString;
	std::string &reference = myString;
	std::cout << "str: " << myString << std::endl;
	std::cout << "pointer: " << *pointer << std::endl;
	std::cout << "reference: " << reference << std::endl;
	return (0);
}
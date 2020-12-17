/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:28:33 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/17 15:28:34 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int> intArr(5);
		for (size_t i = 0; i < intArr.size(); i++)
			intArr[i] = i;
		for (size_t i = 0; i < intArr.size(); i++)
			std::cout << intArr[i] << std::endl;
	}
	catch(const std::exception& e) {	}
	try
	{
		Array<std::string> stringArr(5);
		for (size_t i = 0; i < stringArr.size(); i++)
			stringArr[i] = "line_" + std::to_string(i);
		for (size_t i = 0; i < stringArr.size(); i++)
			std::cout << stringArr[i] << std::endl;
	}
	catch(const std::exception& e) {	}
	try
	{
		Array<std::string> stringArr(5);
		stringArr[5] = "newLine";
	}
	catch(const std::exception& e) {	}
	return 0;
}
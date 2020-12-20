/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 22:25:55 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/18 22:25:56 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		std::list<int> myList;
		myList.push_back(1);
		myList.push_back(4);
		myList.push_back(9);
		myList.push_back(16);
		myList.push_back(25);

		try
		{
			std::cout << *easyfind(myList, 9) << std::endl;
			std::cout << *easyfind(myList, 56) << std::endl;
		}
		catch(const std::exception& e)
		{
		}
	}
	{
		std::set<int> mySet;
		mySet.insert(1);
		mySet.insert(4);
		mySet.insert(9);
		mySet.insert(16);
		mySet.insert(25);
		try
		{
			std::cout << *easyfind(mySet, 4) << std::endl;
			std::cout << *easyfind(mySet, 56) << std::endl;
		}
		catch(const std::exception& e)
		{
		}
	}
	return (0);
}
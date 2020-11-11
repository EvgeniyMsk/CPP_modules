/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:51:15 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/10 16:51:17 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->amount = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::initialize(void)
{
	std::cout << "> Телефонный справочник" << std::endl;
	std::cout << "> Введите необходимую команду: ADD, SEARCH или EXIT" << std::endl;
}

void	Phonebook::addPerson(void)
{
	if (this->amount == 8)
		std::cout << "> Телефонный справочник полон!" << std::endl;
	else if (this->persons[this->amount].setPerson(this->amount + 1))
		this->amount++;
}

void	Phonebook::showSearchHeader(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->persons[i].showHeader();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	Phonebook::searchPerson(void)
{
	int	index;
	if (this->amount == 0)
		std::cout << "# Телефонная книга пуста!" << std::endl;
	else 
	{
		this->showSearchHeader();
		std::cout << "# Введите индект или 0 для выхода!\n~";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "# Некорректный индекс!\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
		this->persons[index - 1].showPerson();
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:50:56 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/10 19:17:02 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

std::string Person::fieldName[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Address",
	"E-mail",
	"Phone",
	"Birthday",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

Person::Person()
{
	for (int i = firstname; i < darkestsecret; i++)
		this->information[i] = std::string();
}

Person::~Person()
{

}

bool Person::setPerson(int index)
{
	bool	flag = true;
	size_t	len = 0;
	this->index = index;
	for (int i = firstname; i < darkestsecret; i++)
	{
		std::cout << "# " << Person::fieldName[i] << "\n";
		std::getline(std::cin, this->information[i]);
		len += this->information[i].length();
	}	
	if (len == 0)
	{
		std::cout << "Пустой контакт не был добавлен!\n";
		flag = false;
	}
	else
		std::cout << "Контакт успешно добавлен!\n";
	return (flag);
}

void Person::showHeader()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = firstname; i <= nickname; i++)
	{
		std::cout << "|";
		if (this->information[i].length() > 10)
			std::cout << this->information[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->information[i];
	}
	std::cout << "|" << std::endl;
}

void Person::showPerson()
{
	std::cout << "#Контакт index = [" << this->index << "]" << std::endl;
	for (int i = firstname; i < darkestsecret; i++)
	{
		std::cout << "#" << Person::fieldName[i] << ": ";
		std::cout << this->information[i] << std::endl;
	}
	std::cout << std::endl;
}
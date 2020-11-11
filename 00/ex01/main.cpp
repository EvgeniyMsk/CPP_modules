/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:59:26 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/10 16:52:16 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook pb;
	std::string		cmd;
	bool	run = true;
	pb.initialize();
	while (run)
	{
		std::cout << "> Введите команду для выполнения: ADD, SEARCH или EXIT" << std::endl;
		getline(std::cin, cmd);
		if (cmd == "ADD")
			pb.addPerson();
		else if (cmd == "SEARCH")
			pb.searchPerson();
		else if (cmd == "EXIT")
		{
			run = false;
			std::cout << "Завершение работы." << std::endl;
		}
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:51:08 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/15 00:16:21 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string	setName(std::string fileName)
{
	std::string fileNameReplace = fileName;
	for (size_t i = 0; i < fileName.length(); i++)
		fileNameReplace[i] = (char)std::toupper(fileName[i]);
	fileNameReplace.append(".replace");
	return (fileNameReplace);
}

int			replace(std::string fileName, std::string str1, std::string str2)
{
	std::ifstream		input(fileName);
	std::ostringstream	ss;
	std::ofstream		output(setName(fileName));
	std::string			buffer;
	size_t				position;
	if (!input)
	{
		std::cout << "Can't open file!" << std::endl;
		return (1);
	}
	if (!output)
	{
		std::cout << "Can't open " << setName(fileName) << ".replace" << std::endl;
		return (1);
	}
	ss << input.rdbuf();
	buffer = ss.str();
	if (buffer.length() == 0)
	{
		std::cout << "File is empty!" << std::endl;
		return (1);
	}
	position = buffer.find(str1);
	while (position != std::string::npos)
	{
		buffer.replace(position, str1.length(), str2);
		position = buffer.find(str1, position + str2.length());
	}
	output << buffer;
	output.close();
	input.close();
	return (0);
}

int		main(int argc, char **argv)
{
	std::string	fileName;
	std::string s1, s2;
	std::string fileNameReplace;
	if (argc != 4)
	{
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	fileNameReplace = setName(fileName);
	return (replace(fileName, s1, s2));
}
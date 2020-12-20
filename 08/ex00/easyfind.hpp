/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 22:25:52 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/18 22:25:53 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <list>
#include <iostream>
#include <set>
#include <algorithm>

class FinderException : public std::exception 
{
	public: 
	FinderException(std::string const &reason) 
	{
		std::cout << reason << std::endl;
	};
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	int result = *std::find(container.begin(), container.end(), value);
	if (result == value)
	{
		std::cout << "Value was found: ";
		return (std::find(container.begin(), container.end(), value));
	}
	throw FinderException("it can’t be found");
}

#endif
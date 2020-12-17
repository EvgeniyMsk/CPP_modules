/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:28:37 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/17 15:28:38 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>

class Array
{
private:
	unsigned int length;
	T *array;
public:
	Array() :
		length(0), array(nullptr)
	{
	};

	Array(unsigned int n) :
		length(n), array(nullptr)
	{
		array = new T[n];
	}

	Array(Array const &copy) :
		length(0), array(nullptr)
	{
		if (copy.length > 0)
		{
			length = copy.length;
			array = new T[length];
			for (int i = 0; i < length; i++)
				array[i] = copy.array[i];
		}
	}

	Array &operator=(Array const &array)
	{
		if (length > 0)
			delete[] array;
		length = array.length;
		array = new T[length];
		for (int i = 0; i < length; i++)
			array[i] = array.array[i];
		return (*this);
	}

	~Array()
	{
		if (length > 0)
			delete[] array;	
	}

	class ArrayException : public std::exception 
	{
		public: 
		ArrayException(std::string const &reason)
		{
			std::cout << reason << std::endl;
		};
	};

	T &operator[](unsigned int index)
	{
		if (index >= length)
			throw ArrayException("Index is out of range");
		return (array[index]);
	}

	size_t size()
	{
		return length;
	}
};



 
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:11:46 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/20 15:11:48 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack<T>();

	MutantStack(MutantStack const &copy);

	MutantStack &operator=(MutantStack const &mutantstack);
	
	virtual ~MutantStack<T>();

	class iterator : public std::iterator<std::input_iterator_tag, T>
	{
		private:
		T *ptr;
		public:
		iterator() :
			ptr(nullptr)
		{
		}

		iterator(T *newPtr) :
			ptr(newPtr)
		{
		}

		~iterator()
		{
		}

		iterator &operator++()
		{
			this->ptr++;
			return (*this);
		}

		iterator &operator--()
		{
			this->ptr--;
			return (*this);
		}

		bool operator!=(iterator const &other) const
		{
			return (other.ptr != this->ptr);
		}

		bool operator==(iterator const &other) const
		{
			return (other.ptr == this->ptr);
		}
		
		T &operator*() const
		{
			return (*this->ptr);
		}

		T *operator->() 
		{
				return (this->ptr);
		}
	};

	iterator begin();
	iterator end();
};

#include "MutantStack.ipp"

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.ipp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:11:51 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/20 15:11:52 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack()
{

};

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &copy)
{
	*this = copy;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &mutantstack)
{
	this->c = mutantstack.c;
	return (*this);
}

template<typename T>	
MutantStack<T>::~MutantStack<T>()
{
};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (iterator(&this->top() - this->size() + 1));
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (iterator(&this->top() + 1));
}
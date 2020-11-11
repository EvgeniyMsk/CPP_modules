/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:51:10 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/10 16:51:12 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Person
{
	static std::string	fieldName[11];
	private:
	int					index;
	std::string			information[11];
	enum fields
	{
		firstname,
		lastname,
		nickname, 
		login,
		postaladdress,
		emailaddress,
		phonenumber,
		birthdaydate, 
		favoritemeal, 
		underwearcolor,
		darkestsecret
	};
	
	public: 
	Person();
	~Person();
	bool		setPerson(int index);
	void		showHeader();
	void		showPerson();
};

#endif
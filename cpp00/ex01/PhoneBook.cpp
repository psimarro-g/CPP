/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimarro <psimarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:10:43 by psimarro          #+#    #+#             */
/*   Updated: 2024/03/20 09:46:44 by psimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nbcontacts(0){}

PhoneBook::~PhoneBook(void){}

void PhoneBook::AddContact(void)
{
	if (_nbcontacts == 8)
		_nbcontacts = 0;
	if (_pbook[_nbcontacts].createcontact())
		_nbcontacts++;
}

void	PhoneBook::SearchContact(void)
{
	int i;
	std::string index;

	i = 1;
	if (!_pbook[0].checkcontact())
	{
		std::cout << "Error: No contacts available" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	while (i < 8)
	{
		_pbook[i].displaycontactind();
		i++;
	}
	std::cout << "Enter the index of the contact you want to display: ";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	{
		i = index[0] - '0';
		_pbook[i].displaycontact();
	}
	else
		std::cout << "Invalid index" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimarro <psimarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:15:20 by psimarro          #+#    #+#             */
/*   Updated: 2024/04/28 18:48:27 by psimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

bool	Contact::createcontact(void)
{
	int	i;

	i = 0;
	std::cout << "Introduce first name: ";
	if (!std::getline(std::cin, _first_name) || _first_name.empty())
		return (_errorcreating(1));
	std::cout << "Introduce last name: ";
	if (!std::getline(std::cin, _last_name))
		return (_errorcreating(2));
	std::cout << "Introduce nickname: ";
	if (!std::getline(std::cin, _nickname))
		return (_errorcreating(3));
	std::cout << "Introduce phone number: ";
	if (!std::getline(std::cin, _phone_number) || _phone_number.empty())
		return (_errorcreating(4));
	while(_phone_number[i])
	{
		if (!isdigit(_phone_number[i]))
			return (_errorcreating(5));
		i++;
	}
	std::cout << "Introduce darkest secret: ";
	if (!std::getline(std::cin, _darkest_secret))
		return (_errorcreating(6));
	return (true);
}

bool	Contact::_errorcreating(int i)
{
	if (i > 0)
		_first_name.clear();
	if (i > 1)
		_last_name.clear();
	if (i > 2)
		_nickname.clear();
	if (i > 3)
		_phone_number.clear();
	if (i == 5)
		std::cout << "Error. Phone number must contain only digits." << std::endl;
	if (i > 5)
		_darkest_secret.clear();
	if (i != 5)
		std::cout << "Error creating contact." << std::endl;
	return (false);
}
void	Contact::displaycontactind(void)
{
	if (_first_name.length() > 10)
		std::cout << _first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _first_name << "|";
	if (_last_name.length() > 10)
		std::cout << _last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << _last_name << "|";
	if (_nickname.length() > 10)
		std::cout << _nickname.substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << _nickname << std::endl;
}

void	Contact::displaycontact(void)
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}

bool	Contact::checkcontact(void)
{
	if (_first_name.empty())
		return (false);
	return (true);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimarro <psimarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:20:42 by psimarro          #+#    #+#             */
/*   Updated: 2024/04/28 19:06:11 by psimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook pb;
    std::string cmd;

    std::cout << "Select ADD, SEARCH or EXIT: ";
    while(std::getline(std::cin, cmd) && cmd.compare("EXIT"))
    {
        if (!cmd.compare("ADD"))
            pb.AddContact();
        else if (!cmd.compare("SEARCH"))
            pb.SearchContact();
        else
            std::cout << "Invalid command" << std::endl;
        //if (!std::cin.eof())
        std::cout << "Select ADD, SEARCH or EXIT: ";
    }   
    std::cout << std::endl;
    return (0);
}
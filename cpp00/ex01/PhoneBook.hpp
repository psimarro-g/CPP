/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimarro <psimarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:20:50 by psimarro          #+#    #+#             */
/*   Updated: 2024/03/20 08:22:32 by psimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void	AddContact(void);
        void	SearchContact(void);

    private:

        Contact _pbook[8];
        int     _nbcontacts;
};

#endif
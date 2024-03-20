/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimarro <psimarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:20:06 by psimarro          #+#    #+#             */
/*   Updated: 2024/03/18 20:46:02 by psimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP


#include <iostream>
#include <iomanip>

class Contact
{
    public:

        Contact(void);
        ~Contact(void);

        bool	createcontact(void);
		bool	checkcontact(void);
        void	displaycontactind(void);
		void	displaycontact(void);
	
	private:
	
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif
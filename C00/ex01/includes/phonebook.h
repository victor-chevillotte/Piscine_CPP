/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:15:05 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 11:37:47 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	public:
		std::string getFirstName() const {
			return this->first_name;
		}

		void setFirstName(std::string value);

		std::string getLastName() const {
			return this->last_name;
		}

		void setLastName(std::string value);

		std::string getNickname() const {
			return this->nickname;
		}

		void setNickname(std::string value);

		std::string getPhone() const {
			return this->phone_number;
		}

		void setPhone(std::string value);

		std::string getSecret() const {
			return this->darkest_secret;
		}

		void setSecret(std::string value);

	private: 
		std::string first_name, last_name, nickname, phone_number, darkest_secret;
};

inline void Contact::setFirstName(std::string value)
{
    this->first_name = value;
}

inline void Contact::setLastName(std::string value)
{
    this->last_name = value;
}

inline void Contact::setNickname(std::string value)
{
    this->nickname = value;
}

inline void Contact::setPhone(std::string value)
{
    this->phone_number = value;
}

inline void Contact::setSecret(std::string value)
{
    this->darkest_secret = value;
}

#endif
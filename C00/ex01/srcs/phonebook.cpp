/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:14:58 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 11:35:47 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.h"

static Contact add_contact(void)
{
	Contact contact;
	std::string inputStr;

	std::cout << "\n ---   ADD CONTACT   ---\n";
	inputStr[0] = '\0';
	while (inputStr[0] == '\0')
	{
		std::cout << "First Name: ";
		getline(std::cin, inputStr);
		if (inputStr[0] == '\0')
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setFirstName(inputStr);
	inputStr[0] = '\0';

	while (inputStr[0] == '\0')
	{
		std::cout << "Last Name: ";
		getline(std::cin, inputStr);
		if (inputStr[0] == '\0')
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setLastName(inputStr);
	inputStr[0] = '\0';

	while (inputStr[0] == '\0')
	{
		std::cout << "Nickname: ";
		getline(std::cin, inputStr);
		if (inputStr[0] == '\0')
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setNickname(inputStr);
	inputStr[0] = '\0';

	while (inputStr[0] == '\0')
	{
		std::cout << "Phone Number: ";
		getline(std::cin, inputStr);
		if (inputStr[0] == '\0')
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setPhone(inputStr);
	inputStr[0] = '\0';

	while (inputStr[0] == '\0')
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, inputStr);
		if (inputStr[0] == '\0')
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setSecret(inputStr);

	return (contact);
}

static void print_str(int len, std::string str)
{
	int sp = 11;

	while (len < --sp)
		std::cout << " ";
	if (len > 10)
	{
		for (std::string::size_type i = 0; i < 9; ++i)
			std::cout << str[i];
		std::cout << ".";
	}
	else
		std::cout << str;
}

static void search_contact(Contact *contacts, int contactCount)
{
	int j = -1;
	int len(0);
	std::string str;
	Contact contact;

	std::cout << "\n ---   SEARCH CONTACT   ---\n";
	std::cout << "---------------------------------------------\n";
	std::cout << "|     index|First Name| Last Name|  Nickname|\n";
	std::cout << "---------------------------------------------\n";
	while (++j < contactCount)
	{
		contact = contacts[j];
		std::cout << "|         " << j;
		std::cout << "|";
		str = contact.getFirstName();
		len = str.length();
		print_str(len, str);
		std::cout << "|";
		str = contact.getLastName();
		len = str.length();
		print_str(len, str);
		std::cout << "|";
		str = contact.getNickname();
		len = str.length();
		print_str(len, str);
		std::cout << "|\n";
	}
	if (j == 0)
		std::cout << "|          |          |          |          |\n---------------------------------------------\n";
	else
	{
		std::cout << "---------------------------------------------\n\n";
		std::cout << "Please select an index : ";
		std::cin >> j;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Your selection is not an int.\n\n";
		}
		else if (j >= contactCount || j < 0)
			std::cout << "Contact at index " << j << " does not exist.\n\n";
		else
		{
			contact = contacts[j];
			std::cout << "Here is contact at index " << j << "\n\n";
			str = contact.getFirstName();
			std::cout << "First Name : " << str << "\n";
			str = contact.getLastName();
			std::cout << "Last Name : " << str << "\n";
			str = contact.getNickname();
			std::cout << "Nickname : " << str << "\n";
			str = contact.getPhone();
			std::cout << "Phone number : " << str << "\n";
			str = contact.getSecret();
			std::cout << "Darkest secret : " << str << "\n";
		}
	}
}

int main(void)
{
	std::string inputStr;
	Contact contacts[8];
	int contactAddIndex = -1;
	int contactCount = 0;

	std::cout << "Waiting for command : ADD, SEARCH or EXIT" << std::endl;
	while (getline(std::cin, inputStr))
	{
		if (inputStr.compare("ADD") == 0)
		{
			contactCount++;
			if (contactAddIndex >= 7)
			{
				contactCount = 8;
				contactAddIndex = -1;
			}
			contacts[++contactAddIndex] = add_contact();
			std::cout << "Waiting for command : ADD, SEARCH or EXIT" << std::endl;
		}
		else if (inputStr.compare("SEARCH") == 0)
			search_contact(contacts, contactCount);
		else if (inputStr.compare("EXIT") == 0)
		{
			std::cout << "Bye !\n";
			return (1);
		}
		else
			std::cout << "Waiting for command : ADD, SEARCH or EXIT" << std::endl;
	}
	return (1);
}
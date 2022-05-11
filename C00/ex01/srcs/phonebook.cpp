/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:14:58 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/11 10:33:43 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.h"

static Contact addContact(void)
{
	Contact contact;
	std::string inputStr;

	std::cout << "\n ---   ADD CONTACT   ---\n";
	inputStr = "";
	while (inputStr.compare("") == 0 && !std::cin.eof())
	{
		std::cout << "First Name: ";
		getline(std::cin, inputStr);
		if (inputStr.compare("") == 0 && !std::cin.eof())
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setFirstName(inputStr);
	inputStr = "";

	while (inputStr.compare("") == 0 && !std::cin.eof())
	{
		std::cout << "Last Name: ";
		getline(std::cin, inputStr);
		if (inputStr.compare("") == 0 && !std::cin.eof())
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setLastName(inputStr);
	inputStr = "";

	while (inputStr.compare("") == 0 && !std::cin.eof())
	{
		std::cout << "Nickname: ";
		getline(std::cin, inputStr);
		if (inputStr.compare("") == 0 && !std::cin.eof())
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setNickname(inputStr);
	inputStr = "";

	while (inputStr.compare("") == 0 && !std::cin.eof())
	{
		std::cout << "Phone Number: ";
		getline(std::cin, inputStr);
		if (inputStr.compare("") == 0 && !std::cin.eof())
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setPhone(inputStr);
	inputStr = "";

	while (inputStr.compare("") == 0 && !std::cin.eof())
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, inputStr);
		if (inputStr.compare("") == 0 && !std::cin.eof())
			std::cout << "Input Can't be empty, please try again\n";
	}
	contact.setSecret(inputStr);

	return (contact);
}

void printStr(std::string str)
{
	if (str.size() > 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + '.';
	else
		std::cout << std::right << std::setw(10) << str;
}

static void searchContact(Contact *contacts, int contactCount)
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
		printStr(str);
		std::cout << "|";
		str = contact.getLastName();
		len = str.length();
		printStr(str);
		std::cout << "|";
		str = contact.getNickname();
		len = str.length();
		printStr(str);
		std::cout << "|\n";
	}
	if (j == 0)
		std::cout << "|          |          |          |          |\n";
	std::cout << "---------------------------------------------\n\n";
	std::cout << "Please select an index : ";
	std::cin >> j;
	if (std::cin.fail())
	{
		if (!std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Your selection is not an int.\n\n";
			std::cout << "Waiting for command : ADD, SEARCH or EXIT" << std::endl;
		}
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
		std::cout << "Darkest secret : " << str << "\n\n";
	}
}

int main(void)
{
	std::string inputStr;
	Contact contacts[8];
	int contactAddIndex = -1;
	int contactCount = 0;

	std::cout << "Waiting for command : ADD, SEARCH or EXIT" << std::endl;
	while (getline(std::cin, inputStr) && !std::cin.eof())
	{
		if (inputStr.compare("ADD") == 0)
		{
			if (contactCount < 8)
				contactCount++;
			if (contactAddIndex >= 7)
				contactAddIndex = -1;
			contacts[++contactAddIndex] = addContact();
			if (!std::cin.eof())
				std::cout << "Waiting for command : ADD, SEARCH or EXIT" << std::endl;
		}
		else if (inputStr.compare("SEARCH") == 0)
			searchContact(contacts, contactCount);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:56 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/20 16:05:07 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact()
{
	std::string input;
	int index = count % 8;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	contacts[index].setfirstname(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	contacts[index].setlastname(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	contacts[index].setphone(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	contacts[index].setnickname(input);

	count++;
}

int PhoneBook::getCount() const
{
	return count;
}

std::string format_dot(const std::string& str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

void PhoneBook::displayContacts() const 
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    int total;
    if (count < 8)
        total = count;
    else
        total = 8;

    for (int i = 0; i < total; ++i) 
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << format_dot(contacts[i].getfirstname()) << "|"
                  << std::setw(10) << format_dot(contacts[i].getlastname()) << "|"
                  << std::setw(10) << format_dot(contacts[i].getnickname()) << std::endl;
    }
}

void PhoneBook::displayContact(int idx) const
{
    if (idx < 0 || idx >= count || idx >= 8)
    {
        std::cout << "this input is invalid" << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[idx].getfirstname() << std::endl;
    std::cout << "Last Name: " << contacts[idx].getlastname() << std::endl;
    std::cout << "Phone: " << contacts[idx].getphone() << std::endl;
    std::cout << "Nickname: " << contacts[idx].getnickname() << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasszgh <anasszgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:56 by azghibat          #+#    #+#             */
/*   Updated: 2025/11/08 19:28:22 by anasszgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}

std::string getValidInput(const std::string& prompt)
{
    std::string input;
    
    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            exit(0);
        }
        if (input.empty())
        {
            std::cout << "Field cannot be empty! Please try again." << std::endl;
            continue;
        }
        return input;
    }
}

int PhoneBook::addContact()
{
    int index = count % 8;

    contacts[index].setfirstname(getValidInput("Enter First Name: "));
    contacts[index].setlastname(getValidInput("Enter Last Name: "));
    contacts[index].setphone(getValidInput("Enter Phone Number: "));
    contacts[index].setnickname(getValidInput("Enter Nickname: "));
    contacts[index].setDarkestSecret(getValidInput("Enter Darkest Secret: "));

    count++;
    return (0);
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
    std::cout << "Darkest Secret: " << contacts[idx].getDarkestSecret() << std::endl;
}
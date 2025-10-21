/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:03:03 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/20 16:06:46 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>

bool isNumber(const std::string &str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            phonebook.addContact();
        }
        else if (command == "SEARCH")
        {
            if (phonebook.getCount() == 0)
            {
                std::cout << "PhoneBook is empty!" << std::endl;
                continue;
            }

            phonebook.displayContacts();

            std::cout << "Enter index to view: ";
            std::string idx_input;
            std::getline(std::cin, idx_input);

            if (!isNumber(idx_input))
            {
                std::cout << "invalid input!" << std::endl;
                continue;
            }

            int idx = std::stoi(idx_input);
            if (idx < 0 || idx >= phonebook.getCount() || idx >= 8)
            {
                std::cout << "invalid index!" << std::endl;
            }
            else
            {
                phonebook.displayContact(idx);
            }
        }
        else if (command == "EXIT")
        {
            std::cout << "exiting PhoneBook." << std::endl;
            break;
        }
        else
        {
            std::cout << "input invalid or unknow command" << std::endl;
        }
    }

    return 0;
}

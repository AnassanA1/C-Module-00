/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasszgh <anasszgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:03:03 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/31 16:24:25 by anasszgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>  // For atoi (C++98 compliant)

bool isNumber(const std::string &str)
{
    if (str.empty())
        return (false);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        
        if (!std::getline(std::cin, command))
        {
            std::cout << std::endl;
            std::cout << "getline failure" << std::endl;
            exit(0);
        }

        if (command == "ADD")
            phonebook.addContact();   
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
            
            int idx = std::atoi(idx_input.c_str());
            
            if (idx < 0 || idx >= phonebook.getCount() || idx >= 8)
                std::cout << "invalid index!" << std::endl;
            else
                phonebook.displayContact(idx);
        }
        else if (command == "EXIT")
        {
            std::cout << "exiting PhoneBook." << std::endl;
            break;
        }
        else
            std::cout << "input invalid or unknow command" << std::endl;
    }

    return 0;
}
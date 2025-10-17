/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:56 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/17 18:12:56 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {} //constractor 

void PhoneBook::add_contact()
{
    std::string input;

    std::cout << "Enter the First Name: ";
    std::getline(std::cin, input);
    contacts[index].setfirstname(input);

    std::cout << "Enter the Last Name: ";
    std::getline(std::cin, input);
    contacts[index].setlastname(input);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, input);
    contacts[index].setphone(input);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, input);
    contacts[index].setnickname(input);

    index = (index + 1) % 8;
}


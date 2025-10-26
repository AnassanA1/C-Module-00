/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:56:31 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/23 11:03:33 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {
private:
	Contact contacts[8];
	int count;

public:
	PhoneBook(); // constructor

	int addContact();
	void displayContacts() const;
	void displayContact(int index) const;
	int getCount() const;
	
};

#endif
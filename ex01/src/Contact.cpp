/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasszgh <anasszgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:09:51 by azghibat          #+#    #+#             */
/*   Updated: 2025/11/08 19:29:50 by anasszgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() {}

void Contact::setfirstname(const std::string &fn) { firstname = fn; }
void Contact::setlastname(const std::string &ln) { lastname = ln; }
void Contact::setphone(const std::string &pn) { phone = pn; }
void Contact::setnickname(const std::string &nn) { nickname = nn; }
void Contact::setDarkestSecret(const std::string &ds) { darkestSecret = ds; }

std::string Contact::getfirstname() const { return firstname; }
std::string Contact::getlastname() const { return lastname; }
std::string Contact::getphone() const { return phone; }
std::string Contact::getnickname() const { return nickname; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }


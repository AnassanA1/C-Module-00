/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:56:14 by azghibat          #+#    #+#             */
/*   Updated: 2025/10/18 12:43:23 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP



#include <string>

class Contact {
private:
    std::string firstname;
    std::string lastname;
    std::string phone;
    std::string nickname;

public:
    Contact(); // default constructor

    // Setters
    void setfirstname(const std::string &fn);
    void setlastname(const std::string &ln);
    void setphone(const std::string &pn);
    void setnickname(const std::string &nn);

    // Getters
    std::string getfirstname() const;
    std::string getlastname() const;
    std::string getphone() const;
    std::string getnickname() const;
};

#endif

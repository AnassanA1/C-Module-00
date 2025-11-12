/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasszgh <anasszgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:56:14 by azghibat          #+#    #+#             */
/*   Updated: 2025/11/08 19:29:04 by anasszgh         ###   ########.fr       */
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
    std::string darkestSecret;

public:
    Contact();

    void setfirstname(const std::string &fn);
    void setlastname(const std::string &ln);
    void setphone(const std::string &pn);
    void setnickname(const std::string &nn);
    void setDarkestSecret(const std::string &ds);

    std::string getfirstname() const;
    std::string getlastname() const;
    std::string getphone() const;
    std::string getnickname() const;
    std::string getDarkestSecret() const;
};

#endif
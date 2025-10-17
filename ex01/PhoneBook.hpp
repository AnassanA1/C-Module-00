#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
private :

	Contact contacts[8];
	int index;
	int	total;

public :

	PhoneBook() {index = 0; }
	
	void add_contact(const Contact& c)
	{
		std::string input;

		std::cout << "Enter the first Name : ";
		std::getline(std::cin, input);
		contacts[index].setfirstname(input);

		std::cout << "Enter the Last Name : ";
		std::getline(std::cin, input);
		contacts[index].setlastname(input);

		std::cout << "Enter Phone number : ";
		std::getline(std::cin, input);
		contacts[index].setphone(input);



		index = (index + 1) % 8; 
	}
};
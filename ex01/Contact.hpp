#include <iostream>
#include <string>

class Contact {
private :
	std::string firstname;
	std::string lastname;
	std::string phone;

public :
	void setfirstname(std::string fn) { firstname = fn; }
	void setlastname(std::string ln) { lastname = ln; }
	void setphone(std::string pn) { phone = pn; }

	std::string getfirstname() const { return (firstname); }
	std::string getlastname() const { return (lastname); }
	std::string getphone() const { return (phone); }
};
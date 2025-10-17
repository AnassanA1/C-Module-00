#include <iostream>
#include <cctype>
#include <string>

class cat {
public :

	std::string name;
	int weight;

	void declare_the_cat()
	{
		std::cout << "this cat's name is " << name << " and it height is " << weight;
	}
};
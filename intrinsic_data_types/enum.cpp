// writing a program to display the values of the content in an enum

#include <iostream>


enum colors{ red, yellow, amber=yellow, green};

int main()
{
	std::cout << "The value of red in the enum is: " <<red <<"\n";
	std::cout << "The value of yellow in the enum is: " << yellow <<"\n";
	std::cout << "The value of the aber in the enum is: " << amber <<"\n";
	std::cout << "The value of the green in the enum is: " << green <<"\n";

	return 0;

}

#include <iostream>

int main()
{
	int number; // defining a variable called integer
	
	// creating a pointer to the variable above
	int *numPointer = &number;

	int &numReference = number; // created a reference to the same integer variable

	// creating a constant integer
	const int myConstantNumber = 30;

	number = 5;

	++*numPointer; // incrementing the value in the variable through the pointer

	++numReference; // incrementing the value of the variable through the reference

	std::cout << "this is the output of the integer numer:" << number <<"\n";
	
	// myConstantNumber =4; this gives a read only when uncommented because it has a constant value
	
	//outputing the decimal values of the following values
	
	int x {0Xf3f2};
	std::cout << "this is the decimalvalue of 0Xf3f2 is: "; 
	std::cout << std::dec <<x <<"\n";

	int y {0437};
	std::cout << " this is the decimal value of 0437 is: " << y <<"\n";

	int z {'a'};
	std::cout << "this is the decimal value of 'a' is: " << z << "\n";
		


	return 0;

}









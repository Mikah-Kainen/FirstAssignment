#include <iostream>
#include <string>

int main()
{
	using std::cout;
	using std::cin;
	std::cout << "test \n" << std::endl;
	int a;
	cin >> a;

	std::string myString;

	cin >> myString;

	std::cout << "did run" << "\nnum: " << a << "\nstring: " << myString << std::endl;

	std::cout << "\nline: " << myString;
 	
}
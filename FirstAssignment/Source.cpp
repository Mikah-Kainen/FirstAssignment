#include <iostream>
#include <string>

int main()
{
	//using std::cout;
	//using std::cin;
	//std::cout << "test \n" << std::endl;
	//int a;
	//cin >> a;

	//std::string myString;

	//cin >> myString;

	//std::cout << "did run" << "\nnum: " << a << "\nstring: " << myString << std::endl;

	//std::cout << "\nline: " << myString;
 	
	std::cout << "You are playing Mad Libs, please enter when asked with proper grammar";

	std::string noun;
	std::string verb;
	std::string adverb;
	std::string noun2;
	std::string noun3;
	std::string verb2;

	std::cout << "please give a noun";
	std::cin >> noun2;
	std::cout << "please give a noun";
	std::cin >> noun3;
	std::cout << "please give a noun";
	std::cin >> noun;
	std::cout << "please give a verb";
	std::cin >> verb;
	std::cout << "please give a verb";
	std::cin >> verb2;
	std::cout << "please give a adverb";
	std::cin >> adverb;

	std::cout << "\nThe " << noun << " \n " << adverb << " \n" << verb << " while the " << "\n" << noun2 << " \n " << verb2 << "the" << " \n " << noun3;

}
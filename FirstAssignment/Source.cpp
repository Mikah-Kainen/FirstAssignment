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
 	
	std::cout << "You are playing Mad Libs, please enter when asked with proper grammar" << std::endl;

	std::string noun;
	std::string verb;
	std::string adverb;
	std::string noun2;
	std::string noun3;
	std::string verb2;
	std::string subordinatingConjunction;

	std::cout << "\nplease give a noun";
	std::getline(std::cin, noun2);
	std::cout << "\nplease give a noun";
	std::getline(std::cin, noun3);
	std::cout << "\nplease give a noun";
	std::getline(std::cin, noun);
	std::cout << "\nplease give a verb that takes a direct object";
	std::getline(std::cin, verb2);
	std::cout << "\nplease give a verb";
	std::getline(std::cin, verb);
	std::cout << "\nplease give a adverb";
	std::getline(std::cin, adverb);
	std::cout << "\nplease give a subordinating conjunction(like with or while)";
	std::getline(std::cin, subordinatingConjunction);

	std::cout << "\nThe " << noun << " " << adverb << " " << verb << " " << subordinatingConjunction << " the " << noun2 << " " << verb2 << " the" << " " << noun3;

}
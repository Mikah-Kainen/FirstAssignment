#include <iostream>
#include <string>

int main()
{
//#include <iostream>
//#include <random>
//#include <ctime>
//
//
//	int randInt(int min, int max)
//	{
//		return std::rand() % (max - min) + min;
//	}
//
//	int main()
//	{
//		std::srand(std::time(nullptr)); // seed
//
//		for (int i = 0; i < 100; i++)
//		{
//			std::cout << randInt(5, 30) << "\n";
//		}
//
//		// print ou
//
//		return 0;
//	}
 	
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
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <array>

int GetRandom(int min, int max)
{
	return std::rand() % (max - min) + min;
}

//void foo(int arr[])
//{
//
//}

//void foo(int* arr)
//{
//
//}

// should be able to swap the values of two numbers
void swap(int* a, int* b)	// pointer to a and b
{
	int temp = *a;	// dereference (get value ) of a
	*a = *b;
	*b = temp;
}



int main()
{
	//////////////////////////////////////////////////////////////////////////////////////////Chris! please show me Vectors and more pointer practice/ from Mikah before I forget
	int x = 5;
	int y = 6;

	swap(&x, &y);
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
	//int oldWay[5] = {};	// doesnt tell you the size, keep track yourself
	//std::array<int, 5> numbers {};	// use size()

	//int x = 5;
	//std::cout << x << std::endl;

	//std::cout << &x << std::endl;

	//int* xpointer = &x;

	//std::cout << xpointer << std::endl;

	//std::cout << *xpointer << std::endl;

	std::srand(std::time(nullptr));

	std::array<int, 5> numbers = {GetRandom(0, 101), GetRandom(0, 101), GetRandom(0, 101), GetRandom(0, 101), GetRandom(0, 101)};
	//std::cout << "ArrayPointer: " << &numbers << ", Array[0]: " << &numbers[0] << ", Array[1]: " << &numbers[1] << ", Array[2]: " << &numbers[2] << ", Array[3]: " << &numbers[3] << ", Array[4]" << &numbers[4] << std::endl;
 	
	size_t;
	//int* arr = numbers;

	/*for (size_t i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " : " << &arr[i] <<std::endl;
	}*/

	/*std::cout << "You are playing Mad Libs, please enter when asked with proper grammar" << std::endl;

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

	std::cout << "\nThe " << noun << " " << adverb << " " << verb << " " << subordinatingConjunction << " the " << noun2 << " " << verb2 << " the" << " " << noun3;*/

	std::array<char, 5> letters = {};
	std::cin >> letters[0];
	std::cin >> letters[1];
	std::cin >> letters[2];
	std::cin >> letters[3];
	std::cin >> letters[4];

	for (int x = 4; x > 0; x --)
	{
		for (int i = 0; i < x; i ++)
		{
			if (letters[i] > letters[i + 1])
			{
				int temp = letters[i];
				letters[i] = letters[i + 1];
				letters[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i ++)
	{
		std::cout << "letters[" << i << "]:";
		std::cout << letters[i] << std::endl;
	}
}
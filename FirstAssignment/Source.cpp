#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <array>
#include <vector>

int GetRandom(int max, int min)
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

void AddRandomNumbers(int amountOfNumbers, int max, int min, std::vector<int>* vectorPlace)
{
	for (int i = 0; i < amountOfNumbers; i ++)
	{
		vectorPlace->push_back(GetRandom(max, min));
	}
}

void PrintVector(std::vector<int>* vectorPlace)
{
	for(int number : *vectorPlace)
	{
		std::cout << number << std::endl;
	}
}

void SortVector(std::vector<int>* vectorPlace)
{
	for (size_t x = vectorPlace->size() - 1; x > 0; x --)
	{
		for (size_t i = 0; i < x; i++)
		{
			if (vectorPlace->at(i) > vectorPlace->at(i + 1))
			{
				int tempHolder = vectorPlace->at(i);
				vectorPlace->at(i) = vectorPlace->at(i + 1);
				vectorPlace->at(i + 1) = tempHolder;
			}
		}
	}
}

int main()
{

	std::srand(std::time(nullptr));
	//////////////////////////////////////////////////////////////////////////////////////////Chris! please show me Vectors and more pointer practice/ from Mikah before I forget
	int x = 5;
	int y = 6;

	swap(&x, &y);

	//Create a vector
	//pass it into a void function that takes in the vector and a size.  Add that many random numbers 1-1000 to the vector
	//function that prints out the vector
	//void function that takes in a vector and sorts it

	std::vector<int> NewVector{};

	AddRandomNumbers(10, 1000, 0, &NewVector);
	PrintVector(&NewVector);
	std::cout << std::endl;
	SortVector(&NewVector);
	PrintVector(&NewVector);

	//Homework:
	//Reverse vector function (void)
	//Void function that takes in a vector and an array and puts all the values of the array into the vector




	//std::vector<int> MyVector {};
	//MyVector.push_back(4);
	//MyVector.push_back(3);

	//MyVector.push_back(12);
	//
	//auto t = &MyVector;
	//auto t1 = &MyVector[0];
	//MyVector.erase(MyVector.begin() + 1); //deleting the second element in the array

	//std::cout << t << std::endl;
	//std::cout << t1 << std::endl;
	//std::cout << &MyVector[1] << std::endl;

	//for (size_t i = 0; i < MyVector.size(); i++)
	//{
	//	//normal forloop
	//}

	//for (auto var : MyVector)
	//{
	//	//foreach
	//}


	//std::cout << &MyVector[2] << std::endl;

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
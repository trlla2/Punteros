
#include <iostream>

int main()
{
	/*
	//Array estatico de 4 elementos
	const int NUM_ELEMENTS = 4;
	int myArray[NUM_ELEMENTS] = { 3, 4, 5, 6};

	for (int i = 0; i < NUM_ELEMENTS; i++) {
		// Offset 
		std::cout << *(myArray + i) << std::endl;
	}*/
	// 1. 
	/* 
	int a;
	int b;

	int* ptrA = &a;
	int* ptrB = &b;

	std::cout << "Introducce un int a:" << std::endl;
	std::cin >> a;

	std::cout << "Introducce un int b:" << std::endl;
	std::cin >> b;

	std::cout << *ptrA << std::endl;

	std::cout << *ptrB << std::endl;
	*/
	//2.
	/*
	const int NUM_ELEMENTS = 4;
	int arr[NUM_ELEMENTS] = { 3, 4, 5, 6 };

	float average = 0;

	for (int i = 0; i < NUM_ELEMENTS; i++) {
		average += *(arr + i);
	}

	average /= NUM_ELEMENTS;

	std::cout << average << std::endl;
	*/
	// 3. 
	/*
	const int NUM_ELEMENTS = 4;
	
	char arr[NUM_ELEMENTS] = { 'a', 'b', 'l', 'e' };

	for (int i = 0; i < NUM_ELEMENTS; i++) {
		if (*(arr + i) == 'a' || *(arr + i) == 'e' || *(arr + i) == 'i' || *(arr + i) == 'o' || *(arr + i) == 'u') {
			std::cout << *(arr + i) << std::endl;
		}
	}
	*/
	// 4. 
	/*int a = 4;
	int b = 5;

	int* y = &a;
	int* x = &b;

	int* intercambio = nullptr;

	intercambio = y;
	y = x;
	x = intercambio;
	// cin.getline(chain, 80);
	std::cout << *y << *x << std::endl;
	*/
	// 5.
	int a= 4
	int& x= a;
	int b = 4;

	int* y = &a;

	
	
}

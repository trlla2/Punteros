#include <iostream>
#define NUM_STUDENTS 50
#define NUM_CLASSES 10

struct Student { // 24 
	int id; // 4
	std::string name; //16?
	int age; // 4
};

struct Class {
	std::string className; //16?
	Student students[NUM_STUDENTS]; // 24 * 50
};

struct School {
	std::string schoolName;
	Class* classes[NUM_CLASSES]; // 4(tamaño puntero) * 10 
};

int lmao()
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
	/*
	int a= 4
	int& x= a;
	int b = 4;

	int* y = &a;
	*/
	

	//8

	School enti;
	enti.schoolName = "ENTI-UB";
	
	Class tecnologiesProgramacio;
	tecnologiesProgramacio.className = "Tecnologies de la Programacio";
	tecnologiesProgramacio.students[0].name = "Negro ";
	tecnologiesProgramacio.students[0].id = 29700;
	tecnologiesProgramacio.students[0].age = 30;
	
	tecnologiesProgramacio.students[1].name = "Alberto ";
	tecnologiesProgramacio.students[1].id = 29700;
	tecnologiesProgramacio.students[1].age = 19;

	for (int i = 0; i < NUM_STUDENTS; i++) {
		if (tecnologiesProgramacio.students[i].name[0] == 'A') {
			std::cout << tecnologiesProgramacio.students[i].name << std::endl;
		}
		
		if (tecnologiesProgramacio.students[i].age >= 30) {
			std::cout << tecnologiesProgramacio.students[i].name << std::endl;
		}
	}

	for (int i = 0; i < NUM_CLASSES; i++) {
		enti.classes[i] = nullptr;//anular todos los punteros dentro del struc
	}
	enti.classes[0] = &tecnologiesProgramacio;

	for (int i = 0; i < NUM_CLASSES; i++) {
		if (enti.classes[i] != nullptr && enti.classes[i]->className != "") {
			std::cout << enti.classes[i]->className << std::endl;
			//std::cout << (*enti.classes[i])className << std::endl; lo mismo que la linea de arriba

		}
	}
	
}

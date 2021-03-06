// Type project.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <limits>

#define LENGTH 255

int main()
{
	int option;
	std::cout << "Select the number of the operation you want to make : " << std::endl;
	std::cout << "***************************************************************" << std::endl;
	std::cout << "* 1 - See the type execercises                                *" << std::endl;
	std::cout << "* 2 - Fill an arry of ints and print                          *" << std::endl;
	std::cout << "***************************************************************" << std::endl;
	std::cin >> option;
	switch(option){
		case 1:

			std::cout << "The size of an short is " << sizeof(short) << std::endl;
			std::cout << "The size of an int is " << sizeof(int) << std::endl;
			std::cout << "The size of an float is " << sizeof(float) << std::endl;
			std::cout << "The size of an double is " << sizeof(double) << std::endl;
			std::cout << "The size of an long is " << sizeof(long) << std::endl;
			std::cout << "The size of an long long is " << sizeof(long long) << std::endl;
			std::cout << "The size of an size_t is " << sizeof(size_t) << std::endl;

			std::cout << "***************************************************************" << std::endl;
			
			/*
				------------------------------------------------------------
				| tipo      | sizeof() x86 (bytes)  | sizeof() x64 (bytes) |
				| short     |          2            |            2         |
				| int       |          4            |            4         |
				| float     |          4            |            4         |
				| double    |          8            |            8         |
				| long      |          4            |            4         |
				| long long |          8            |            8         |
				| size_t    |          4            |            8         |
				------------------------------------------------------------
				
			*/

			char print_test;
			print_test = 65;
			printf("The value of test in int is : %d \n", print_test);
			printf("The value of test in octal is : %o \n", print_test);
			printf("The value of test in hexa is : %x \n", print_test);
			printf("The value of test in char is : %c \n", print_test);
	
			std::cout << "***************************************************************" << std::endl;
			std::cout << "The max number of the int is " << std::numeric_limits<int>::max() << " and the min " << std::numeric_limits<int>::min() << std::endl;
			std::cout << "The max number of the short is " << std::numeric_limits<short>::max() << " and the min " << std::numeric_limits<short>::min() << std::endl;
			std::cout << "The max number of the long is " << std::numeric_limits<long>::max() << " and the min " << std::numeric_limits<long>::min() << std::endl;
			std::cout << "The max number of the long long is " << std::numeric_limits<long long>::max() << " and the min " << std::numeric_limits<long long>::min() << std::endl;
			std::cout << "The max number of the float is " << std::numeric_limits<float>::max() << " and the min " << std::numeric_limits<float>::min() << std::endl;
			std::cout << "The max number of the double is " << std::numeric_limits<double>::max() << " and the min " << std::numeric_limits<double>::min() << std::endl;
			std::cout << "The max number of the size_t  is " << std::numeric_limits<size_t>::max() << " and the min " << std::numeric_limits<size_t>::min() << std::endl;
			std::cout << "The max number of the unsigned int is " << std::numeric_limits<unsigned int>::max() << " and the min " << std::numeric_limits<unsigned int>::min() << std::endl;
			std::cout << "The max number of the unsigned short is " << std::numeric_limits<unsigned short>::max() << " and the min " << std::numeric_limits<unsigned short>::min() << std::endl;
			std::cout << "The max number of the unsigned long is " << std::numeric_limits<unsigned long>::max() << " and the min " << std::numeric_limits<unsigned long>::min() << std::endl;
			std::cout << "The max number of the unsigned long long is " << std::numeric_limits<unsigned long long>::max() << " and the min " << std::numeric_limits<unsigned long long>::min() << std::endl;
			std::cout << "The max number of the char is " << std::numeric_limits<char>::max() << " and the min " << std::numeric_limits<char>::min() << std::endl;
			std::cout << "The max number of the unsigned char is " << std::numeric_limits<unsigned char>::max() << " and the min " << std::numeric_limits<unsigned char>::min() << std::endl;


			std::cout << "***************************************************************" << std::endl;
			int integer;
			unsigned int uns_integer;
			integer = 0xFFFFFFFF;
			uns_integer = 0xFFFFFFFFu;

			std::cout << "el Valor de a es " << integer << " y el valor de b es " << uns_integer << std::endl;
	
			// El valor cambia porque cambia la forma en que la computadora lee el valor de memoria.
			// En a el bit mas significativo es de signo y lo por la tanto el valor es -1 porque trabaja con
			// con complemento base 2, mientras que en b el valor que se representa es 4294967295 que es (2^32)-1
			// porque usa los 32 bits para representar a los positivos y el cero.

			std::cout << "***************************************************************" << std::endl;
			break;
		case 2:
			int array[LENGTH];
			unsigned int items_in_array = 0;
			int number; 
			
			unsigned int out = 1u;
			while(out) {
				std::cout << "Select the number of the operation you want to make : " << std::endl;
				std::cout << "***************************************************************" << std::endl;
				std::cout << "* 1 - Insert a Number in the array                            *" << std::endl;
				std::cout << "* 2 - Print the current array                                 *" << std::endl;
				std::cout << "* 3 - Exit                                                    *" << std::endl;
				std::cout << "***************************************************************" << std::endl;
				std::cin >> option;
				switch (option)
				{
				case 1:
					std::cout << "Ingrese el numero a insertar en la posicion " << items_in_array << " : ";
					std::cin >> number; 
					array[items_in_array] = number;
					items_in_array = (items_in_array + 1) % LENGTH;
					break;
				case 2:
					unsigned int i;
					i = 0u;
					std::cout << "[";
					while (i < items_in_array) {
						std::cout << array[i] << " ";
						i++;
					}
					std::cout << "]" << std::endl;
					break;
				default:
					out = 0;
					break;
				}
		default:
			break;
			}
	}
	return 0;
}


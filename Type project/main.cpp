// Type project.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <limits>


int main()
{
	std::cout << "The size of an short is " << sizeof(short) << std::endl;
	std::cout << "The size of an int is " << sizeof(int) << std::endl;
	std::cout << "The size of an float is " << sizeof(float) << std::endl;
	std::cout << "The size of an double is " << sizeof(double) << std::endl;
	std::cout << "The size of an long is " << sizeof(long) << std::endl;
	std::cout << "The size of an long long is " << sizeof(long long) << std::endl;
	std::cout << "The size of an size_t is " << sizeof(size_t) << std::endl;

	std::cout << "***************************************************************" << std::endl;
	// el tamaño va a variar de acuerdo a la arquitectura en la que se compile. Si se compila en x86
	// van a tener un valor y otro en x64. Algunos elementos como short, int, float y long van a tener el mismo 
	// tamaño mientras que otros duplicaran el tamaño
    
	char test = 65;
	printf("The value of test in int is : %d \n", test);
	printf("The value of test in float is : %f \n", test);
	printf("The value of test in octal is : %o \n", test);
	printf("The value of test in hexa is : %x \n", test);
	printf("The value of test in char is : %c \n", test);
	
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

	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFFu;

	std::cout << "el Valor de a es " << a << " y el valor de b es " << b << std::endl;
	
	// El valor cambia porque cambia la forma en que la computadora lee el valor de memoria.
	// En a el bit mas significativo es de signo y lo por la tanto el valor es -1 porque trabaja con
	// con complemento base 2, mientras que en b el valor que se representa es 4294967295 que es (2^32)-1
	// porque usa los 32 bits para representar a los positivos y el cero.

	std::cout << "***************************************************************" << std::endl;


 
	return 0;
}


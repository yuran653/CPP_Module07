/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:13:13 by jgoldste          #+#    #+#             */
/*   Updated: 2023/11/11 17:32:40 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

#define SIZE 3

template <typename T>
void testArray(Array<T> array) {
	std::cout << "Array size: [" << array.size() << "]" << std::endl;
	try {
		for (int index = 0; index <= SIZE; index++) {
			std::cout << "Trying to access the element of the array at the index ["
				<< index << "]" << std::endl;
			std::cout << "The elemant of the array at the index [" << index 
				<< "] is:" << std::endl << "-> " << array[index] << std::endl;
		}
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

int main () {
	Array<int>* arr1 = new Array<int>;
	// try {
		testArray(*arr1);
	// } catch (const std::exception& e) {
	// 	std::cerr << "Error: " << e.what() << std::endl;
	// }
	delete arr1;

	std::cout << std::endl;

	Array<int>* arr2 = new Array<int>(SIZE);
	for (int i = 0; i < SIZE; i++)
		(*arr2)[i] = i + 1;
	// try {
		testArray(*arr2);
	// } catch (const std::exception& e) {
	// 	std::cerr << "Error: " << e.what() << std::endl;
	// }
	// std::cout << "arr2 size: [" << (*arr2).size() << "]" << std::endl;
	// try {
	// 	for (int index = 0; index <= SIZE; index++) {
	// 		std::cout << "Trying to access the element of the array at the index ["
	// 			<< index << "]" << std::endl;
	// 		std::cout << "The elemant of the array at the index [" << index 
	// 			<< "] is:" << std::endl << "-> " << (*arr2)[index] << std::endl;
	// 	}
	// } catch (const std::exception& e) {
	// 	std::cerr << "Error: " << e.what() << std::endl;
	// }
	for (int i = 0; i < SIZE; i++)
		std::cout << "array[" << i << "] -> " << &(*arr2)[i] << std::endl;
	std::cout << "Pointer deallocation" << std::endl;
	delete arr2;

	return 0;
}

// Develop a class template Array that contains elements of type T and that implements
// the following behavior and functions:
//
// • Construction with no parameter: Creates an empty array.
//
// • Construction with an unsigned int n as a parameter: Creates an array of n elements
// initialized by default.
// Tip: Try to compile int * a = new int(); then display *a.
//
// • Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.
//
// • You MUST use the operator new[] to allocate memory. Preventive allocation (al-
// locating memory in advance) is forbidden. Your program must never access non-
// allocated memory.
//
// • Elements can be accessed through the subscript operator: [ ].
//
// • When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
//
// • A member function size() that returns the number of elements in the array. This
// member function takes no parameter and musn’t modify the current instance.
// As usual, ensure everything works as expected and turn in a main.cpp file that
// contains your tests.

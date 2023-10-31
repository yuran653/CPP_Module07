/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:23:55 by jgoldste          #+#    #+#             */
/*   Updated: 2023/10/31 19:04:00 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define SIZE 6

template<typename T>
void printElement(const T& element) {
	std::cout << element << std::endl;
}

int main() {
	int int_array[SIZE] = {1, 2, 3, 4, 5, 6};
	double double_array[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	std::string string_array[SIZE] = {"Implement a function template iter that takes 3 parameters and returns nothing.",
		"• The first parameter is the address of an array.",
		"• The second one is the length of the array.",
		"• The third one is a function that will be call on every element of the array."
		"Turn in a main.cpp file that contains your tests. Provide enough code to generate a test executable.",
		"Your iter function template must work with any type of array. The third parameter can be an instantiated function template"};

	std::cout << std::endl;

	std::cout << "Integer array:" << std::endl;
	iter(int_array, SIZE, printElement<int>);
	std::cout << std::endl;

	std::cout << "Double array:" << std::endl;
	iter(double_array, SIZE, printElement<double>);
	std::cout << std::endl;

	std::cout << "String array:" << std::endl;
	iter(string_array, SIZE, printElement<std::string>);
	std::cout << std::endl;
	return 0;
}

// Implement a function template iter that takes 3 parameters and returns nothing.
//
// • The first parameter is the address of an array.
//
// • The second one is the length of the array.
//
// • The third one is a function that will be call on every element of the array.
//
// Turn in a main.cpp file that contains your tests. Provide enough code to generate a
// test executable.
//
// Your iter function template must work with any type of array. The third parameter
// can be an instantiated function template

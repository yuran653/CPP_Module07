/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:07:41 by jgoldste          #+#    #+#             */
/*   Updated: 2023/10/31 17:19:54 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min (T a, T b) {
	return (a < b ? a : b);
}

template<typename T>
T max (T a, T b) {
	return (a > b ? a : b);
}

#endif

// Implement the following function templates:
//
// • swap: Swaps the values of two given arguments. Does not return anything.
//
// • min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one.
//
// • max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.
//
// These functions can be called with any type of argument. The only requirement is
// that the two arguments must have the same type and must support all the comparison
// operators.

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:12:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/11/12 14:16:36 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <stdexcept>
#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size) {
	_array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _array(NULL), _size(other._size) {
	if (other._size > 0) {
		this->_array = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
			this->_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>::~Array() {
	if (_array)
		delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other){
	if (this != &other)
		delete[] this->_array;
	this->_array = NULL;
	this->_size = other._size;
	if (other._size > 0) {
		this->_array = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
			this->_array[i] = other._array[i];
	}
	return *this;
}

// // === C++ style ===
// template <typename T>
// T& Array<T>::operator[](unsigned int index) {
// 	if (index >= _size)
// 		throw std::out_of_range("The index is out of range");
// 	return _array[index];
// }
// // =================

// == C style ==
struct my_out_of_range : std::exception {
	const char* what() const throw() {
		return "The index is out of range";
	}
};

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw my_out_of_range();
	return _array[index];
}
// =================

template <typename T>
unsigned int Array<T>::size() {
	return _size;
}

#endif

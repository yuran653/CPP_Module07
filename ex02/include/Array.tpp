/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:12:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/11/11 18:31:12 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _size(0) {
	_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size) {
	_array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		_array[i] = T();
}
		// Array(Array& other);

template <typename T>
Array<T>::~Array() {
	if (_array)
		delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other){
	if (this == &other)
		return *this;
	_array = other._array;
	_size = other._size;
}

// === C++ style ===
template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw std::out_of_range("The index is out of range");
	return _array[index];
}
// =================

// // == C++98 style ==
// struct my_out_of_range : std::exception {
// 	const char* what() const throw() {
// 		return "The index is out of range";
// 	}
// };

// template <typename T>
// T& Array<T>::operator[](unsigned int index) {
// 	if (index >= _size)
// 		throw my_out_of_range();
// 	return _array[index];
// }
// // =================

template <typename T>
unsigned int Array<T>::size() {
	return _size;
}

#endif

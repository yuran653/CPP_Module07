/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:12:31 by jgoldste          #+#    #+#             */
/*   Updated: 2023/11/10 19:42:09 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _array(0), _size(0) {
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
	delete[] _array;
}

		// Array& operator=(const Array& other);

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	try {
		if (index >= _size)
			throw std::exception();
		return _array[index];
	} catch (std::exception& e) {
		std::cerr << "Error: The index is out of limits" << std::endl;
	}
	return ;
}

		// unsigned int	size();

#endif

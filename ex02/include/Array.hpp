/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:14:02 by jgoldste          #+#    #+#             */
/*   Updated: 2023/11/12 18:16:03 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int size);
		Array(const Array<T>& other);
		~Array();

		Array<T>& operator=(const Array<T>& other);

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int	size() const;
};

#include "Array.tpp"

#endif

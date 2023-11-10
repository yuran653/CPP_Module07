/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:24:22 by jgoldste          #+#    #+#             */
/*   Updated: 2023/11/01 16:33:14 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>
#include <string>

template<typename T, typename Func>
void iter(T* array, size_t size, Func func) {
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

#endif

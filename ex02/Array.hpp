/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:25:39 by maustel           #+#    #+#             */
/*   Updated: 2025/04/17 14:25:39 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>

template <typename T>
class Array
{
	private:
	T* 				_element;
	int	_size;

	public:
	Array();
	~Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
	Array(int n);

	//const for reading, non const for assigning
	const T& operator[](int) const;
	T& operator[](int);

	int size() const;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr);

#include "Array.tpp"

#endif

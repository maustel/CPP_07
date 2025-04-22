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

#pragma once

# include <iostream>

template <typename T>
class Array
{
	private:
	T* 				_element;
	unsigned int	_size;

	public:
	Array();
	~Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
	Array(unsigned int n);

	//const for reading, non const for assigning
	const T& operator[](unsigned int) const;
	T& operator[](unsigned int);

	unsigned int size() const;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr);

#include "Array.tpp"

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:34:52 by maustel           #+#    #+#             */
/*   Updated: 2025/04/17 14:34:52 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//-------------------- [Constructer / Destructor] -------------------

template <typename T>
Array<T>::Array(): _element(nullptr), _size(0)
{}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_element;
}

template <typename T>
Array<T>::Array(unsigned int n): _element(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(const Array& other): _element(nullptr), _size(other._size)
{
	if (other._element)
	{
		this->_element = new T[other.size];
		for (int i = 0; i < other.size; i++)
		this->_element[i] = other._element[i];
	}
}

/*
We have to create a new temporary element, to create a deep copy
and be able to delete the old element of the object that already existed
*/
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		T* tmp_element = nullptr;
		this->_size = other._size;
		if (other._element)
		{
			tmp_element = new T[other.size];
			for (int i = 0; i < other.size; i++)
			tmp_element[i] = other._element[i];
		}
		delete[] this->_element;
		this->_element = tmp_element;
	}
}

//-------------------- [Subscript operator overload] -------------------

template<class T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw std::out_of_range("Index is out of range!");
	return (this->_element[index]);
}

template<class T> T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Index is out of range!");
	return (this->_element[index]);
}

//-------------------- [Member Functions] -------------------

template<class T> unsigned int Array<T>::size() const
{
	return (this->_size);
}

//-------------------- [Other Functions] -------------------

template<class T> std::ostream &operator<<(std::ostream &os, const Array<T> &arr)
{
	os << "Array size: " << arr.size() << "\ncontent:" << std::endl;
	for (int i = 0; i < arr.size(); i++)
		os << "Index " << i << ": " << arr[i] << std::endl;
	return (os);
}

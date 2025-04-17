/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:27:16 by maustel           #+#    #+#             */
/*   Updated: 2025/04/17 13:27:16 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ITER_HPP__
# define __ITER_HPP__

#include <iostream>

template <typename T>
void increase(T& element)
{
	element++;
}

template <typename T>
void decrease(T& element)
{
	element--;
}

template <typename T>
void iter(T* array, int length, void (*f)(T&))
{
	for(int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:02:45 by maustel           #+#    #+#             */
/*   Updated: 2025/04/16 18:02:45 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

/*
A template is a blueprint that lets you write code once and use it with different data types

template <typename T> declares a template parameter T that can represent any type
    The compiler generates separate versions of the function for each type you use
    For example, swap(int, int) and swap(string, string) would be two different functions

This approach is more efficient than writing separate functions for each type
and the compiler handles all the type checking at compile time

T is a template variable/type parameter
place holder for a type that will be provided
*/

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b)
{
	if(a < b)
		return (a);
	return (b);
}

template <typename T>
T max(T a, T b)
{
	if(a > b)
		return (a);
	return (b);
}

#endif

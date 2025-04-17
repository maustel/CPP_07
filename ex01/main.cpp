/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:33:55 by maustel           #+#    #+#             */
/*   Updated: 2025/04/17 13:33:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int arr[3] = {1, 2, 3};
	iter(arr, 3, increase);
	std::cout << "array content after increase:\n" << arr[0] << std::endl << arr[1] << std::endl << arr[2] << std::endl ;
	iter(arr, 3, decrease);
	std::cout << "array content after decrease:\n" << arr[0] << std::endl << arr[1] << std::endl << arr[2] << std::endl ;

	double arrd[3] = {1.1, 2.2, 3.3};
	iter (arrd, 3, increase);
	std::cout << "double array content after increase:\n" << arrd[0] << std::endl << arrd[1] << std::endl << arrd[2] << std::endl ;

	char str[3] = {'a', 'b', 'c'};
	iter(str, 3, increase);
	std::cout << "str after increase:\n" << str << std::endl;
	
	return (0);
}

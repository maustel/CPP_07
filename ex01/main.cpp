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
#include "colors.h"

int main()
{
	int arr[3] = {1, 2, 3};
	iter(arr, 3, increase);
	std::cout << MAG << "array content after increase:\n" << RESET << arr[0] << std::endl << arr[1] << std::endl << arr[2] << std::endl ;
	iter(arr, 3, decrease);
	std::cout << MAG << "array content after decrease:\n" << RESET << arr[0] << std::endl << arr[1] << std::endl << arr[2] << std::endl ;

	double arrd[3] = {1.1, 2.2, 3.3};
	iter (arrd, 3, increase);
	std::cout << MAG << "double array content after increase:\n" << RESET << arrd[0] << std::endl << arrd[1] << std::endl << arrd[2] << std::endl ;

	char str[3] = {'a', 'b', 'c'};
	iter(str, 3, increase);
	std::cout << MAG << "str after increase:\n" << RESET << str << std::endl;

	return (0);
}

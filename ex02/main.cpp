/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:31:18 by maustel           #+#    #+#             */
/*   Updated: 2025/04/17 14:31:18 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "colors.h"

int main()
{
	std::cout << MAG << "-----[ARRAY OF INT]-----" << RESET << std::endl;

	try
	{
		std::cout << GRN << "Should work:" << RESET << std::endl;
		Array<int> int_array(2);
		std::cout << YEL << "Before setting values:\n" << RESET << int_array;
		int_array[0] = 42;
		int_array[1] = 12;
		std::cout << YEL << "After setting values:\n" << RESET << int_array;
		std::cout << RED << "Should fail:" << RESET << std::endl;
		int_array[2] = 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << MAG << "-----[ARRAY OF STRING]-----" << RESET << std::endl;
	try
	{
		std::cout << GRN << "Should work:" << RESET << std::endl;
		Array<std::string> str_array(5);
		str_array[0] = "hummingbird";
		str_array[1] = "woodpecker";
		str_array[4] = "robin";
		std::cout << YEL << "After setting values:\n" << RESET << str_array;

		Array<std::string> str_new(str_array);
		std::cout << YEL << "Copy contructor test:\n" << RESET << str_new;

		Array<std::string> empty;
		empty = str_new;
		std::cout << YEL << "Assignment operator test:\n" << RESET << empty;

		std::cout << RED << "Should fail:" << RESET << std::endl;
		str_array[5] = "hummingbird";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}

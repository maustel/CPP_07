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
		Array<int> int_array(2);
		int_array[0] = 42;
		int_array[1] = 12;
		std::cout << int_array << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}

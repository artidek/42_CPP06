/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:24:54 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/18 13:49:45 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc < 2 || argc > 2)
	{
		std::cout << "Wrong argument number\n";
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
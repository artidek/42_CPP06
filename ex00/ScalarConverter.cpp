/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:39:14 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/18 14:48:40 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void printImpossible(void){std::cout << "impossible\n";}

void printNInf(void) {std::cout << "-inf\n";}

void printInf(void) {std::cout << "inf\n";}

void toDouble(std::string s)
{
	std::stringstream ss(s);
	double d = 0.0;

	ss >> d;
	if (s == "-inf")
		printNInf();
	else if (s == "+inf")
		printInf();
	else if (s == "nan")
		std::cout << "nan\n";
	else if (ss.fail())
		printImpossible();
	else
	{
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
}

void toFloat(std::string s)
{
	std::stringstream ss(s);
	float f = 0.0f;

	ss >> f;
	if (s == "-inf")
		printNInf();
	else if (s == "+inf")
		printInf();
	else if (s == "nan")
		std::cout << "nanf\n";
	else if (ss.fail())
		printImpossible();
	else
	{
		std::cout << std::fixed <<std::setprecision(1) << f << "f\n";
	}
}

void toInt(std::string s)
{
	std::stringstream ss(s);
	int i;

	ss >> i;
	if (s == "-inf" || s == "+inf" || s == "nan" || ss.fail())
		printImpossible();
	else
	{
		std::cout << i << std::endl;
	}
		
			
}

void toChar(std::string s)
{
	std::stringstream ss(s);
	int ic;

	ss >> ic;
	if (ss.fail())
		printImpossible();
	else if ((ic >= 0 && ic <= 32) || ic == 127)
		std::cout << ic << " is unprintable char \n";
	else
		std::cout << static_cast<char>(ic) << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	toChar(s);
	toInt(s);
	toFloat(s);
	toDouble(s);
}
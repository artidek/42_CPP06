/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:11:55 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/18 14:26:13 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_H
#define SCALAR_CONVERTER_H

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & copy);
		~ScalarConverter(void);
	public:
		static void convert(std::string s);
};

#endif
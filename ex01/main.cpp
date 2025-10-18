/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:06:04 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/18 17:18:50 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data original;
	original.val = 5;

	std::cout << "deserialized " << Serializer::deserialize(Serializer::serialize(&original)) << " original " << &original << std::endl;
	std::cout << "deserialized value " << (Serializer::deserialize(Serializer::serialize(&original)))->val << " original " << original.val << std::endl;
	return 0;
}
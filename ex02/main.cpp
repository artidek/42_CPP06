/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:03:49 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/19 19:26:34 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Serializer.hpp"

Base * generate(void)
{
	uintptr_t p;
	Base *b;
	
	int rVal = rand() % 3;
	switch (rVal)
	{
	case 0:
		b = new A();
		std::cout << "class A has been generated\n";
		break;
	case 1:
		b = new B();
		std::cout << "class B has been generated\n";
		break;
	case 2:
		b = new C();
		std::cout << "class C has been generated\n";
		break;
	}
	p = Serializer::serialize(b);
	p |= static_cast<uint8_t>(rVal);
	b = Serializer::deserialize(p);
	return b;
}

void identify(Base *p)
{
	uintptr_t up;

	up = Serializer::serialize(p);
	int i = up & static_cast<uint8_t>(0x3);
	switch (i)
	{
	case 0:
		std::cout << "Class A identified\n";
		break;
	case 1:
		std::cout << "Class B identified\n";
		break;
	case 2:
		std::cout << "Class C identified\n";
		break;
	}
}

void identify(Base &p)
{
	identify(&p);
}

int main (void)
{
	Base *test;

	srand(time(0));
	test = generate();
	identify(test);
	identify(*test);
	return 0;
}
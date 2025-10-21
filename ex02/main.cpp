/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:03:49 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/21 13:21:06 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void printClass(char c){std::cout << c << " identified\n";}

Base * generate(void)
{
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
	return b;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		printClass('A');
	else if (dynamic_cast<B*>(p))
		printClass('B');
	else if (dynamic_cast<C*>(p))
		printClass('C');
}

void identify(Base &p)
{
	std::string err;

	try
	{
		dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		err = e.what();
	}
	if (err.empty())
		printClass('A');
	else
		err.clear();
	try
	{
		dynamic_cast<B&>(p);
	}
	catch(const std::exception& e)
	{
		err = e.what();
	}
	if (err.empty())
		printClass('B');
	else
		err.clear();
	try
	{
		dynamic_cast<C&>(p);
	}
	catch(const std::exception& e)
	{
		err = e.what();
	}
	if (err.empty())
		printClass('C');
	else
		err.clear();
}

int main (void)
{
	Base *test;
	
	srand(time(0));
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:34:43 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/19 17:17:19 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <stdint.h>
#include <iostream>

class Base;

class Serializer
{
	Serializer(void);
	Serializer(Serializer const & copy);
	~Serializer(void);
	public:
		static uintptr_t serialize(Base * ptr);
		static Base *deserialize(uintptr_t raw);
};

#endif
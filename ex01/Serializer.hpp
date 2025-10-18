/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:34:43 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/18 17:01:22 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct sData
{
	int val;
} Data;

class Serializer
{
	Serializer(void);
	Serializer(Serializer const & copy);
	~Serializer(void);
	public:
		static uintptr_t serialize(Data * ptr);
		static Data *deserialize(uintptr_t raw);
};
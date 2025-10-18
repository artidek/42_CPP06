/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:01:15 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/18 17:05:53 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t  Serializer::serialize(Data *pointer)
{
	return reinterpret_cast<uintptr_t>(pointer);
}

Data	*Serializer::deserialize(uintptr_t pointer)
{
	return reinterpret_cast<Data*>(pointer);
}
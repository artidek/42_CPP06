/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:01:15 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/19 17:17:16 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Base.hpp"

uintptr_t  Serializer::serialize(Base *pointer)
{
	return reinterpret_cast<uintptr_t>(pointer);
}

Base	*Serializer::deserialize(uintptr_t pointer)
{
	return reinterpret_cast<Base*>(pointer);
}
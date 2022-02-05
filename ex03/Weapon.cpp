/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:24:04 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:56:05 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string	const	Weapon::getType(void)
{
	return(this->type);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}

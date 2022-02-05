/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:45:31 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:59:29 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
	return;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": has died" << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:55:31 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:59:22 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main(void)
{
	Zombie* harry;

	harry = newZombie("Harry Heap");
	harry->announce();
	delete harry;
	randomChump("Chris Stack");
    return 0;
}

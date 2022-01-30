/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:34:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/01/30 22:53:10 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main(void)
{
	int		i;
	Zombie*	horde;
	
	horde = zombieHorde(10, "fakeZombie");
	for (i = 0; i < 10; i++) 
	{
		horde[i].announce();
	}
	delete [] horde;
    return 0;
}
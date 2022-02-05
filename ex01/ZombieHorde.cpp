/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:41:16 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:58:23 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;

	Zombie* ZombieHorde = new Zombie[N];
	i = 0;	
	while (i < N)
	{
		ZombieHorde[i].setName(name);
		i++;
	}
	return (ZombieHorde);
}

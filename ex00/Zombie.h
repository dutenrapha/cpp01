/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:08:48 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:59:32 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define  ZOMBIE_H
# include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump( std::string name );
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:36:30 by rdutenke          #+#    #+#             */
/*   Updated: 2022/01/31 00:15:53 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define  HUMAN_A_H
#include <string>
#include "Weapon.hpp"

class HumanA
{

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	
private:
	std::string name;
	Weapon &weapon;
};

#endif

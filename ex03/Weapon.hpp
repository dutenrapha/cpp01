/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:24:36 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:56:09 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define  WEAPON_H
#include <string>

class Weapon 
{

public:
	Weapon(std::string type);
	~Weapon(void);
	std::string	const getType(void);
	void		setType(std::string type);
	
private:
	std::string type;
};

#endif

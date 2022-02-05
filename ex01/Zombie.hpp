/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:45:23 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:58:20 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define  ZOMBIE_CLASS_H
#include <string>

class Zombie 
{

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void		setName(std::string name);
	void		announce(void);
	
private:
	std::string name;
};

#endif

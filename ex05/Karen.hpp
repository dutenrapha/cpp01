/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:02:55 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 17:39:29 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN
#define  KAREN
#include <string>
#include <iostream>


class Karen
{
public:
	typedef	void(Karen::*complains)(void);
	Karen(void);
	~Karen(void);
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
#endif
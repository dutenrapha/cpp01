/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:03:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 17:39:27 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return;
}
Karen::~Karen(void)
{
	return;
}

void Karen::debug(void)
{
	std::cout << "\"DEBUG\" level: Debug messages contain contextual information. They are mostly used for problem diagnosis. Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << std::endl;
}

void Karen::info(void)
{
	std::cout << "\"INFO\" level: These messages contain extensive information. They are helpful for tracing program execution in a production environment. Example: \"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "\"WARNING\" level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored. Example: \"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;
}

void Karen::error(void)
{
	std::cout << "\"ERROR\" level: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention. Example: \"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Karen::complain(std::string level)
{
	int	i;

	complains func[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*func[i])();
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KarenFilter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:03:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:47:53 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenFilter.hpp"

KarenFilter::KarenFilter(void)
{
	return;
}
KarenFilter::~KarenFilter(void)
{
	return;
}

void KarenFilter::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void KarenFilter::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void KarenFilter::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void KarenFilter::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void KarenFilter::complain(std::string level)
{
	int	i;

	complains func[] = {&KarenFilter::debug, &KarenFilter::info, &KarenFilter::warning, &KarenFilter::error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			break;
		}
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*func[0])();
		case 1:
			(this->*func[1])();
		case 2:
			(this->*func[2])();
		case 3:
			(this->*func[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:03:07 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 17:43:04 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen k;

	k.complain("DEBUG");
	std::cout << std::endl;
	k.complain("INFO");
	std::cout << std::endl;
	k.complain("WARNING");
	std::cout << std::endl;
	k.complain("ERROR");
	std::cout << std::endl;
	return(0);
}
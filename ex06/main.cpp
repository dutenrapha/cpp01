/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:03:07 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/05 18:49:03 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenFilter.hpp"

int main(int argc, char *argv[])
{
	KarenFilter k;
	
	if (argc < 2)
	{
		std::cout << "You need to pass at least one claim level." << std::endl;
		return(1);
	}
	k.complain(argv[1]);
	return(0);
}
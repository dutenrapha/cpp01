/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:59:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/01/30 23:09:28 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		string;
	string = "HI THIS IS BRAIN";
	
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

    std::cout << "The memory address of the string variable " << &string << std::endl;
	std::cout << "The memory address held by stringPTR " <<  stringPTR << std::endl;
	std::cout << "The memory address held by stringREF " <<  &stringREF << std::endl;
	
	std::cout << "The value of the string variable " << string << std::endl;
	std::cout << "The value pointed to by stringPTR " <<  *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF " <<  stringREF << std::endl;
		
	return 0;
}
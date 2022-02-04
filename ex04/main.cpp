/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:03:09 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/04 03:04:12 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int output(std::string text, std::string filename)
{
	std::ofstream	textOutput;
	
	filename.append(".replace");
	textOutput.open(filename.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!(textOutput.is_open()))
  	{
		std::cout << filename << "Unable to open file" << std::endl;
		textOutput.close();
		return(1);
  	}
	textOutput << text;
	textOutput.flush();
	textOutput.close();
	return(0);
}

std::string  replace(std::string text, std::string s1, std::string s2)
{
	std::size_t found;
	std::string		newText;

	while (text.find(s1) != std::string::npos)
	{
		found = text.find(s1);
		newText.append(text.substr( 0, found));
		newText.append(s2);
		text = text.substr( found + s1.size(), text.size() );
	}
	newText.append(text);
	return(newText);
}

std::string  readfile(std::string filename)
{
	std::ifstream	inFile;
	std::stringstream buffer;

	inFile.open(filename.c_str());
	buffer << inFile.rdbuf();    
    inFile.close();
	return(buffer.str());
}

int openfile(std::string filename)
{
	std::ifstream	inFile;

	inFile.open(filename.c_str());
    if (!(inFile.is_open()))
	{
        std::cout << "Unable to open file" << std::endl;
        return(1); 
    }
	inFile.close();
	return(0);
}

int main(int argc, char *argv[])
{
	std::string text;
	std::string newText;

	if (argc != 4)
	{
		std::cout << "You need 3 parameters: a filename and two strings, s1 and s2." << std::endl;
		return(1);
	}
	if (openfile(argv[1]) != 0)
		return(1);
	text = readfile(argv[1]);
	newText = replace(text, argv[2], argv[3]);
	if (output(newText, argv[1]) != 0)
		return(1);
	return(0);
}

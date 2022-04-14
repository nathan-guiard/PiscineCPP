/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:39:41 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/14 14:00:52 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	std::string	input;
	int			i = 0;

	std::cout << "\033[?1049h\033[0;0H";
	while (1)
	{
		book.ask();
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input.compare("ADD") == 0)
		{
			book.add(i);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
			book.search();
		else if (input.compare("EXIT") == 0)
			break;
		else
			std::cout << "Sorry, command not found" << std::endl;
		if (i == 7)
			i = 0;
	}
	std::cout << "\033[?1049l";
	return 0;
}
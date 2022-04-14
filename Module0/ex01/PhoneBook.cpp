/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:34:33 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/14 13:45:48 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook constructor Called" << std::endl;
	return;	
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook destructor Called" << std::endl;
	return;
}

void PhoneBook::add(const int i)
{
	(void)i;
	std::string	input;

	std::cout << "\033[0;0H\033[0J";

	std::cout << "First name:" << std::endl;
	std::getline(std::cin, input);
	this->contact_tab[i].first_name = input;

	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, input);
	this->contact_tab[i].last_name = input;
	
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, input);
	this->contact_tab[i].nickname = input;

	std::cout << "Phone Number:" << std::endl;
	std::getline(std::cin, input);
	this->contact_tab[i].phone_number = input;

	std::cout << "Darkest secret?" << std::endl;
	std::getline(std::cin, input);
	this->contact_tab[i].darkest_secret = input;

	std::cout << "Contact " << this->contact_tab[i].first_name 
		<< " added." << std::endl;
	return;
}

void PhoneBook::ask(void) const
{
	std::cout << "Please input ADD, SEARCH or EXIT" << std::endl;
	return;
}

void PhoneBook::search(void) const
{
	PhoneBook::print();
	return;
}

void PhoneBook::print(void) const
{
	int	i = 0;

	std::cout << "\033[0;0H\033[0J";
	while (i < 8)
	{
		std::cout << i + 1 << " | ";
		ten_char(this->contact_tab[i].first_name);
		std::cout << " | ";
		ten_char(this->contact_tab[i].last_name);
		std::cout << " | ";
		ten_char(this->contact_tab[i].nickname);
		std::cout << " | ";
		ten_char(this->contact_tab[i].phone_number);
		std::cout << " |" << std::endl;
		i++;
	}
}

std::string PhoneBook::ten_char(const std::string str) const
{
	int i = 0;

	while (i < 10 && i < (int)str.length())
	{
		if (i == 9 && str.length() > 9)
		{
			std::cout << ".";
			i++;
		}
		else
		{
			std::cout << str[i];
			i++;
		}
	}
	while (i < 10)
	{
		std::cout << " ";
		i++;
	}
	return (str);
}
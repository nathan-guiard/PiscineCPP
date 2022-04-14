/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:34:33 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/14 11:38:48 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor Called" << std::endl;
	return;	
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor Called" << std::endl;
	return;
}
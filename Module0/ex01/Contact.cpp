/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:45:18 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/14 13:40:09 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->first_name =		"         ";
	this->last_name =		"         ";
	this->nickname =		"         ";
	this->phone_number =	"         ";
	this->darkest_secret =	"         ";
	return;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destructor called" << std::endl;
	return;
}
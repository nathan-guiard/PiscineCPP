/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:19:46 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/14 13:28:11 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{

public:

	Contact(void);
	~Contact(void);
	
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

class PhoneBook 
{

public:

	PhoneBook(void);
	~PhoneBook(void);
	void	add(const int i);
	void	search(void) const;
	void	ask(void) const;
	
	Contact	contact_tab[8];

private:
	void		print(void) const;
	std::string	ten_char(const std::string str) const;
};
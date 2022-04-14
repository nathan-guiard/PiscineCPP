/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:31:43 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/14 10:59:36 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int 		i = 1;
	std::string	str;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (i < argc)
	{
		str = argv[i];
		for (int a = 0; str[a] != 0; a++)
			str[a] = toupper(str[a]);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
    return 0;
}

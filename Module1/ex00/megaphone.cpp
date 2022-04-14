/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:31:43 by nguiard           #+#    #+#             */
/*   Updated: 2022/04/12 17:56:54 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	std::string	str;

	while (i < argc)
	{
		str = argv[i];
		str.push_back(' ');
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
    return 0;
}

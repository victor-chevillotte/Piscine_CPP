/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:03:25 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 10:04:40 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	int		i = 0;
	int		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
		}
	std::cout << std::endl;
	return (0);
}
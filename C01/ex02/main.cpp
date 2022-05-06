/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:24:46 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 17:00:48 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int		main( void )
{
	std::string	originalString = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalString;
	std::string	&stringREF = originalString;
	std::cout << "Original string address: " << &originalString << std::endl;
	std::cout << "using stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "using stringREF: " << &stringREF << std::endl;
	std::cout << "Original string: " << originalString << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
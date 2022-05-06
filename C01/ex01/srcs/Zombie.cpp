/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:25:24 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 16:52:57 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Zombie.hpp"
Zombie::Zombie( void ): name("")
{
}
void	Zombie::announce( void ) const
{
	Zombie::prefix();
	std::cout << "BraiiiiiiinnnzzzZ......." << std::endl;
}
void	Zombie::prefix( void ) const
{
	std::cout << "<" << this->name << "> ";
}
Zombie::~Zombie( void )
{
	Zombie::prefix();
	std::cout << "dies" << std::endl;
}

void	Zombie::setName( std::string newName )
{
	this->name = newName;
}

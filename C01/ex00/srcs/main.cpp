/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:24:46 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 16:33:31 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Zombie.hpp"
int	main( void )
{
	std::cout << "Creating the first Zombie, Robert, \"manually\"" << std::endl;
	{
		Zombie	robert("John");
		robert.announce();
	}
	std::cout << "Creating the second Zombie, Paul, using the function newZombie"<< std::endl;
	{
		Zombie	*georges = newZombie("Paul");
		georges->announce();
		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Mark, using the function randomChump"<< std::endl;
		randomChump("Mark");
	}
}

Zombie*	newZombie( std::string name )
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

void	randomChump( std::string name )
{
	Zombie randomChump = Zombie(name);
	randomChump.announce();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:24:46 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 16:52:45 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Zombie.hpp"
void	announceZombies( Zombie *zombieHorde, size_t numberOfZombies)
{
	for (size_t i = 0; i < numberOfZombies; i++)
		zombieHorde[i].announce();
}
int		main( void )
{
	std::cout << "Creating the first Zombie horde" << std::endl;
	{
		Zombie	*firstZombieHorde = zombieHorde(4, "Mehdi");
		announceZombies(firstZombieHorde, 4);
		delete [] firstZombieHorde;
	}
}


Zombie	*zombieHorde( int numberOfZombies, std::string name )
{
	Zombie	*zombieHorde = new Zombie[numberOfZombies];
	
	for (int i = 0; i < numberOfZombies; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
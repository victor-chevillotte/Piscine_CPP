/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:25:46 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 16:53:21 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
class	Zombie
{
public:
	Zombie( void );
	~Zombie( void );
	void 		setName( std::string newName);
	void		announce( void ) const;
private:
	void		prefix( void ) const;
	std::string name;
};
Zombie	*zombieHorde( int numberOfZombies, std::string name );
#endif

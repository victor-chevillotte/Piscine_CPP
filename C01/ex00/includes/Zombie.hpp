/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:25:46 by vchevill          #+#    #+#             */
/*   Updated: 2022/05/06 16:36:00 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
class	Zombie
{
public:
	Zombie( std::string name );
	~Zombie( void ); // ~ for destructor
	void		announce( void ) const;
private:
	void		prefix( void ) const;
	std::string name;
};
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif

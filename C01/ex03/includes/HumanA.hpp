#ifndef HUMANA_HPP
# define ZOMBIE_HPP
# include <string>
class	HumanA
{
public:
	HumanA( void );
	~HumanA( void );
	std::string getPhone() const
	{
		return this->phone_number;
	}

	void setPhone(std::string value);

	std::string getSecret() const
	{
		return this->darkest_secret;
	}
private:
	void		prefix( void ) const;
	std::string type;
};
HumanA	*zombieHorde( int numberOfZombies, std::string name );
#endif

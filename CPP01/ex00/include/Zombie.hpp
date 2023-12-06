#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
	/*variables*/
		std::string _name;
	public:
	/*constructor and destructor*/
		Zombie(std::string arg);
		~Zombie();
	//Zombie Class Function
		void	announce(void);
};

#endif
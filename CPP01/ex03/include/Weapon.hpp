#include <iostream>

class Weapon{
	private:
	/*variables*/
		std::string _type;
	public:
		Weapon(std::string arg);
		~Weapon();
		const std::string &getType(void);
		void	setType(std::string arg);

};

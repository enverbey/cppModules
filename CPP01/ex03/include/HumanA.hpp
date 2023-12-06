#include "Weapon.hpp"

class HumanA{
	private:
	/*variables*/
		std::string _name;
		Weapon	&Weapon;
	public:
		HumanA(std::string argName, Weapon &argWeapon);
		~HumanA();
		void	attack();
};
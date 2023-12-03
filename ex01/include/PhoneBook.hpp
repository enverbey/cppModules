#include "Contact.hpp"

class PhoneBook{
	private:
	/*varibales*/
		Contact	_contacts[8];
		int		_i;
	public:
	/*constructor and destructor*/
		PhoneBook(void);
		~PhoneBook(void);
	/*Phone Function*/
		void	add(void);
		void	search(void);
};
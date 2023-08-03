#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
class PhoneBook{
	private:
		Contact		phone_num[8];
	public:
		PhoneBook();
		bool	add_to_book(int i);
		void	print(int i);
		bool	search(std::string c);
		~PhoneBook();
};

#endif

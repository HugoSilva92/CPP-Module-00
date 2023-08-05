#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	;
}

bool	PhoneBook::add_to_book(int i){
	return (phone_num[i].add_cnt(i));
}


void	PhoneBook::show()
{
	std::cout << "--------------------------------------------------------\n";
	std::cout << "|     Index| FirstName| Last Name|  Nickname|    Number|\n";
	std::cout << "--------------------------------------------------------\n";
	for (int i = 0; i < 8; i++)
		phone_num[i].print(i);
	std::cout << "--------------------------------------------------------\n";
}

void	PhoneBook::print(int i){
	if (phone_num[i].is_written())
		phone_num[i].print_search();
	else
		std::cout << "Nothing on that index is saved" << std::endl;
}

bool	PhoneBook::search(std::string c)
{
	int	nb = atoi(c.c_str()) - 1;
	if (nb < 0 || nb > 7)
		return false;
	print(nb);
	return true;
}

PhoneBook::~PhoneBook(){
	;
}

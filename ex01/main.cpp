#include "PhoneBook.hpp"

int	main(){
	PhoneBook book;
	std::string cmd;
	int	i = 0;
	std::string	src;

	while (1)
	{
		std::cout << "What is your command Master?" << std::endl;
		getline(std::cin, cmd);
		if (cmd == "break")
			break;
		if (cmd == "ADD")
		{
			if(!book.add_to_book(i))
				std::cout << "Something went wrong with your input!" << std::endl;
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "What is the index of the Contact that you're looking?" << std::endl;
			getline(std::cin, src);
			if (!book.search(src))
				std::cout << "Wrong value for index, only numbers between 1 and 8!" << std::endl;
		}
		else if (cmd == "EXIT")
			exit (0);
	}
}

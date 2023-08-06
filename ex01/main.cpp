#include "PhoneBook.hpp"
#include <csignal>

void	print_layout()
{
	std::cout << "-------------------------------------------------------\n";
	std::cout << "|                    PhoneBook                        |\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << "      Use ADD, to add contacts to the PhoneBook.       \n";
	std::cout << "       Use SEARCH, to search contacts by index.        \n";
	std::cout << "     Use EXIT, if you want to close the PhoneBook      \n";
	std::cout << std::endl;
	std::cout <<"                  Hope you enjoy it!                    \n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << std::endl;
}

int	main(){
	PhoneBook book;
	std::string cmd, src;
	int	i = 0;

	while (true)
	{
		print_layout();
		std::cout << "            What is your command Master?" << std::endl;
		getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT")
			exit(0);
		else if (cmd == "break")
			break;
		if (cmd == "ADD")
		{
			if(!book.add_to_book(i))
				std::cout << "\nSomething wrong with you syntax!" << std::endl;
			else{
				i++;
				if (i == 8)
					i = 0;
			}
			std::cout << "\nPress Enter to continue..." << std::endl;
			std::cin.get();
		}
		else if (cmd == "SEARCH")
		{
			book.show();
			std::cout << "\nWhat is the index of the Contact that you're looking?" << std::endl;
			getline(std::cin, src);
			if (!book.search(src))
				std::cout << "\nWrong value for index, only numbers between 1 and 8!" << std::endl;
			std::cout << "\nPress Enter to continue..." << std::endl;
			std::cin.get();
		}
		else
			std::cout << "\nWrong command" << std::endl;
	}
}

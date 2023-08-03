#include "Contact.hpp"

Contact::Contact(){
	written = false;
}

bool	Contact::add_cnt(int i){
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string ph_num;
	std::string dk_sec;

	std::cout << "First name: ";
	getline(std::cin, f_name);
	if (f_name.length() == 0)
		return false;
	std::cout << "Last name: ";
	getline(std::cin, l_name);
	if (l_name.length() == 0)
		return false;
	std::cout << "Nickname: ";
	getline(std::cin, n_name);
	if (n_name.length() == 0)
		return false;
	std::cout << "Phone Number: ";
	getline(std::cin, ph_num);
	if (ph_num.length() == 0)
		return false;
	std::cout << "Dark Secret: ";
	getline(std::cin, dk_sec);
	if (dk_sec.length() == 0)
		return false;

	first_name = f_name;
	last_name = l_name;
	nickname = n_name;
	num = ph_num;
	darkest_secret = dk_sec;
	index = i + 1;
	written = true;
	return true;
}

std::string	Contact::resize_string(std::string str)
{
	if(str.size() > 9)
	{
		str.resize(9);
		str.append(".");
	}
	return str;
}

void	Contact::print()
{
	first_name = resize_string(first_name);
	last_name = resize_string(last_name);
	nickname = resize_string(nickname);
	num = resize_string(num);

	std::cout << "-------------------------------------------------------\n";
	std::cout << "|     Index|FirstName| Last Name|  Nickname|    Number|\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << "|" << std::setw(9) << index << "|";
	std::cout << std::setw(10) << first_name << "|";
	std::cout << std::setw(10) << last_name << "|";
	std::cout << std::setw(10) << nickname << "|";
	std::cout << std::setw(10) << num << "|" << std::endl;
	std::cout << "-------------------------------------------------------\n";
}

bool	Contact::is_written()
{
	if (written)
		return true;
	return false;
}

Contact::~Contact()
{
	;
}

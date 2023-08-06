#include "../includes/Contact.hpp"

Contact::Contact(){
	_written = false;
}

bool	Contact::check_digit(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i])) return false;
	}
	return true;
}

bool	Contact::add_cnt(int i){
	std::string f_name , l_name, n_name, ph_num, dk_sec;

	std::cout << "First name: ";
	getline(std::cin, f_name);
	if (f_name.length() == 0) return false;
	std::cout << "Last name: ";
	getline(std::cin, l_name);
	if (l_name.length() == 0) return false;
	std::cout << "Nickname: ";
	getline(std::cin, n_name);
	if (n_name.length() == 0) return false;
	std::cout << "Phone Number (Just numbers): ";
	getline(std::cin, ph_num);
	if (ph_num.length() == 0 || !check_digit(ph_num)) return false;
	std::cout << "Dark Secret: ";
	getline(std::cin, dk_sec);
	if (dk_sec.length() == 0) return false;

	_dk_scr = dk_sec;
	_first_name = f_name;
	_last_name = l_name;
	_nickname = n_name;
	_num = ph_num;
	_written = true;
	std::cout << "\nContact added in index: " << i + 1 << std::endl;
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

void	Contact::print_search()
{
	std::cout << "First Name: ";
	std::cout << _first_name << std::endl;
	std::cout << "Last Name: ";
	std::cout << _last_name << std::endl;
	std::cout << "Nickname: ";
	std::cout << _nickname << std::endl;
	std::cout << "Phone Number: ";
	std::cout << _num << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << _dk_scr << std::endl;
}

void	Contact::print(int i)
{
	std::string f_name = resize_string(_first_name);
	std::string l_name = resize_string(_last_name);
	std::string nick = resize_string(_nickname);
	std::string number = resize_string(_num);


	std::cout << "|" << std::setw(10) << i + 1 << "|";
	std::cout << std::setw(10) << f_name << "|";
	std::cout << std::setw(10) << l_name << "|";
	std::cout << std::setw(10) << nick << "|";
	std::cout << std::setw(10) << number << "|" << std::endl;
}

bool	Contact::is_written()
{
	if (_written)
		return true;
	return false;
}

Contact::~Contact()
{
	;
}

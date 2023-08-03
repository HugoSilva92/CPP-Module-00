#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	private:
		std::string		num;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		darkest_secret;
		int				index;
		bool			written;
	public:
		Contact();
		bool	add_cnt(int i);
		void	print();
		std::string	resize_string(std::string str);
		bool	is_written();
		~Contact();
};
#endif

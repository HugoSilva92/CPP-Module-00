#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	private:
		std::string		_num;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_darkest_secret;
		int				_index;
		bool			_written;
	public:
		Contact();
		bool		add_cnt(int i);
		void		print(int i);
		std::string	resize_string(std::string str);
		bool		is_written();
		bool		check_digit(std::string str);
		void		print_search();
		~Contact();
};
#endif

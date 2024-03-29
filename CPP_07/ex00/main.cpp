/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/30 11:14:43 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

class Awesome
{
	
	public:
		
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }


	private:
		
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int	main(void) {

	int a = 2; int b = 4;
	
	std::cout << "int : " << "a = " << a << "; b = " << b << std::endl;
	std::cout << "max(a, b) = " << max<int>(a, b) << std::endl;
	std::cout << "min(a, b) = " << min<int>(a, b) << std::endl;
	swap(a, b);
	std::cout << "swap(a, b) => " << "a = " << a << "; b = " << b << std::endl;

	std::cout << std::endl;

	/* ************************************************************************** */

	float c = 3.14f; float d = 4.2f;
	
	std::cout << "float : " << "c = " << c << "; d = " << d << std::endl;
	std::cout << "max(c, d) = " << max<float>(c, d) << std::endl;
	std::cout << "min(c, d) = " << min<float>(c, d) << std::endl;
	swap(c, d);
	std::cout << "swap(c, d) => " << "c = " << c << "; d = " << d << std::endl;

	std::cout << std::endl;

	/* ************************************************************************** */

	char e = 'A';	char f = 'Z';
	
	std::cout << "char : " << "e = " << e << "; f = " << f << std::endl;
	std::cout << "max(e, f) = " << max<char>(e, f) << std::endl;
	std::cout << "min(e, f) = " << min<char>(e, f) << std::endl;
	swap<char>(e, f);
	std::cout << "swap(e, f) => " << "e = " << e << "; f = " << f << std::endl;

	std::cout << std::endl;

	/* ************************************************************************** */

	std::string g = "AAA";	std::string h = "AAB";
	
	std::cout << "std::string : " << "g = \"" << g << "\"; h = \"" << h << '"' << std::endl;
	std::cout << "max(g, h) = " << max<std::string>(g, h) << std::endl;
	std::cout << "min(g, h) = " << min<std::string>(g, h) << std::endl;
	swap(g, h);
	std::cout << "swap(g, h) => " << "g = \"" << g << "\"; h = \"" << h << '"' << std::endl;

	std::cout << std::endl;

	/* ************************************************************************** */

	Awesome i(2), j(4);
	std::cout << "Awesome : " << "i = " << i << "; j = " << j << std::endl;
	std::cout << "max(i, j) = " << max<Awesome>(i, j) << std::endl;
	std::cout << "min(i, j) = " << min<Awesome>(i, j) << std::endl;
	swap(i, j);
	std::cout << "swap(i, j) => " << "i = " << i << "; j = " << j << std::endl;

	std::cout << std::endl;

	return (0);
}

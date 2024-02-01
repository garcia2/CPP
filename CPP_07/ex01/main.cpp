/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:49:31 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/30 11:21:55 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void	power(const int & x){

	std::cout << x << " to square = " << (x * x) << std::endl;
}

template<typename T>
void	printArray(const T & element){

	std::cout << element << "; ";
}

void modifyString(const std::string & str) {
    
	std::cout << str << "_NICO" << std::endl;
}

class Awesome {
	
	public:
		
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	
	
	private:
		
		int _n;

};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
	
template< typename T >
void print( T const & x ) { 
	std::cout << x << std::endl;
	return;
}

int	main(void) {

	int array1[4] = {1, 2 ,3, 4};
	std::cout << "array1 => { "; iter(array1, 4, printArray<int>); std::cout << "}" << std::endl;
	iter(array1, 4, &power);

	std::cout << std::endl;

	/* ************************************************************************** */

	std::string array2[3] = {"Yo", "Salut" ,"Wesh"};
	std::cout << "array2 => { "; iter(array2, 3, printArray<std::string>); std::cout << "}" << std::endl;
	iter(array2, 3, modifyString);

	std::cout << std::endl;

	/* ************************************************************************** */

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	
	Awesome tab2[5];
	
	iter( tab, 5, print );
	iter( tab2, 5, print );

	return (0);
}

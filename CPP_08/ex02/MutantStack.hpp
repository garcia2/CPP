/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 19:32:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{

	public:


		// Constructors & Destructors
		MutantStack(void) : std::stack<T>() { }								// Cannonical
		MutantStack(MutantStack const & other) : std::stack<T>(other) { }	// Cannonical
		virtual ~MutantStack(void) { }										// Cannonical


		// Functions
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin() {

			return (this->c.begin());
		}

		iterator end() {

			return (this->c.end());
		}

		// Operators overload
		MutantStack &	operator=(MutantStack const & other){

			if (this != &other){

				std::stack<T>::operator=(other);
			}
			return (*this);
		} // Cannonical

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 03:12:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

	private:
		
		// Attributes
		int	_size;
		T *				_array;

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Array(void) : _size(0), _array(NULL) { }

		Array(const Array & other) : _size(other._size), _array(new T[other._size]) {
			
			for (int i = 0; i < this->_size; ++i) {
				
				this->_array[i] = other._array[i];
			}
		}	// Cannonical
		
		Array(int size) : _size(size) {


			if (size < 0)
				throw std::invalid_argument("Size must be positive");
			
			_array = new T[size];

			for (int i = 0; i < size; i++) {

				this->_array[i] = T();
			}
		}

		virtual ~Array(void) {

			delete [] this->_array;
		}	// Cannonical


		// Functions
		int	size(void) const {

			return (this->_size);
		}		


		// Operators overload
		Array & operator=(const Array & other) {
			
			if (this != &other) {
				
				delete[] _array;

				this->_size = other._size;
				this->_array = new T[this->_size];

				for (int i = 0; i < this->_size; ++i) {
					
					this->_array[i] = other._array[i];
				}
			}
			return (*this);
		}	// Cannonical

		T &	operator[](int index) {

			if (index >= this->_size || index < 0) {

				throw std::out_of_range("Index out of bounds");
			}
			return this->_array[index];
		}

		// Getters

		// Setters

		// Exceptions

};

#endif
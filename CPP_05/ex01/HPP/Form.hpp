/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/17 22:18:54 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		
		// Attributes
		const std::string	_name;
		bool				_signed;
		const int			_canSignGrade;
		const int			_canExecGrade;

		// Functions

		// Hidden Constructor
		Form(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Form(Form const & other);	// Cannonical
		Form(const std::string & name, int canSignGrade, int canExecGrade);
		virtual ~Form(void);				// Cannonical

		// Functions
		void	beSigned(Bureaucrat & bureaucrat);

		// Operators overload
		Form &	operator=(Form const & other); // Cannonical

		// Getters
		std::string const	getName(void) const;
		int					getCanExecGrade(void) const;
		int					getCanSignGrade(void) const;
		

		// Setters

		// Exceptions
		class GradeTooHighException : public std::exception {

			public:
				virtual const char * what() const throw() {

					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char * what() const throw() {

					return ("Grade is too low");
				}
		};

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
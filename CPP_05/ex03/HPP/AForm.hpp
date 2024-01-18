/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/17 22:18:54 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		
		// Attributes

		// Functions

		// Hidden Constructor

	protected:
		
		// Attributes
		const std::string	_name;
		bool				_signed;
		const int			_canSignGrade;
		const int			_canExecGrade;

		// Functions

		// Hidden Constructor (except for inheritance)
		AForm(void);						// Cannonical

	public:

		// Constructors & Destructors
		AForm(AForm const & other);	// Cannonical
		AForm(const std::string & name, int canSignGrade, int canExecGrade);
		virtual ~AForm(void);				// Cannonical

		// Functions
		void	beSigned(Bureaucrat & bureaucrat);

		// Operators overload
		AForm &	operator=(AForm const & other); // Cannonical

		// Getters
		std::string const	getName(void) const;
		int					getCanExecGrade(void) const;
		int					getCanSignGrade(void) const;
		virtual void        execute(const Bureaucrat & executor) const = 0;
		

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

		class FormNotSignedException : public std::exception {
			
			public:
            	virtual const char * what() const throw() {
					
					return "Form is not signed";
				}
    	};

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif
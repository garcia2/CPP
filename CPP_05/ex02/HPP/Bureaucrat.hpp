/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/22 16:18:21 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

	private:
		
		// Attributes
		const std::string	_name;
		int					_grade;

		// Functions

		// Hidden Constructor
		Bureaucrat(void);						// Cannonical

	protected:
		
		// Attributes

		// Functions

		// Hidden Constructor (except for inheritance)

	public:

		// Constructors & Destructors
		Bureaucrat(Bureaucrat const & other);	// Cannonical
		Bureaucrat(const std::string & name, int grade);
		virtual ~Bureaucrat(void);				// Cannonical

		// Functions
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(AForm & form);
		void	executeForm(AForm & form) const;

		// Operators overload
		Bureaucrat &	operator=(Bureaucrat const & other); // Cannonical

		// Getters
		const std::string	getName(void) const;
		int					getGrade(void) const;

		// Setters

		// Exceptions
		class GradeTooHighException : public std::exception {

			public:
				virtual const char * what() const throw() {

					return ("Grade is too high and can't be more increased");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char * what() const throw() {

					return ("Grade is too low and can't be more decreased");
				}
		};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif
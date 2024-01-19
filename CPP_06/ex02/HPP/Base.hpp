/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/19 16:55:31 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
# define Base_HPP

#include <iostream>

class Base {

	public:
		virtual ~Base(void);	
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:14:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/25 18:16:53 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <iomanip>

template <typename T>
void	swap(T & a, T & b) {

	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T &	min(T & a, T & b) {

	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T &	max(T & a, T & b) {

	if (a > b)
		return (a);
	else
		return (b);
}

#endif
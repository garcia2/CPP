/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:14:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/23 02:44:20 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
//#include <string>

template <typename T>
void	iter(T * array, int length, void (*f)(T &)) {

	for (int i = 0; i < length; i++){

		f(array[i]);
	}
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:38:58 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/25 18:38:27 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
typename T::iterator easyfind(T & container, int value) {

	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw std::invalid_argument("can't find value in container");
	
	return (it); 
}

#endif
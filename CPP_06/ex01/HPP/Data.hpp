/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:21:17 by nicolas           #+#    #+#             */
/*   Updated: 2024/01/19 16:22:54 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

struct Data
{
    const std::string & name;
	const std::string & lastname;
    int         		age;
	bool				isCool;

	Data(const std::string & name, const std::string & lastname, int age, bool isCool) :
		name(name),
		lastname(lastname),
		age(age),
		isCool(isCool) { }
};

#endif
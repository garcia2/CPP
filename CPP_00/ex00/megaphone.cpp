/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 07:09:14 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/24 07:56:54 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	putStrToUpper(char	*str) {

	int	i;
	
	i = 0;
	while (str[i] != '\0') {

		str[i] = std::toupper(str[i]);
		i++;
	}
	std::cout << str << " ";
}

int	main(int argc, char **argv) {

	if (argc == 1) {

		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {

		argv++;
		while (*argv != NULL) {
			
			putStrToUpper(*argv);
			argv++;
		}
		std::cout << std::endl;
	}
}
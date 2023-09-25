/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:23:26 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/25 23:55:50 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv) {

	if (argc != 4) {
		
		std::cerr << "You need to input 3 arguments (string file, string s1, string s2)" << std::endl;
		return (1);
	}

	std::string		fileName(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	
	std::ifstream	ifs(fileName.c_str());
	if (ifs.fail()) {
		
		std::cerr << "file \""<< fileName <<"\" does not exists or access denied" << std::endl;
		return (2);
	}
	
	std::ofstream	ofs(fileName.append(".replace").c_str());
	if (ofs.fail()) {
		
		std::cerr << "file \""<< fileName <<"\" access denied" << std::endl;
		return (3);
	}

	std::string		line;
	while (std::getline(ifs, line)) {
		
		if (s1.length() > 0) {
	
			int i = line.find(s1, 0);
			while (i != -1)
			{
				line.erase(i, s1.length());
				line.insert(i, s2);
				i = line.find(s1, i + s2.length());
			}
		}
		ofs << line;
		if (!ifs.eof())
			ofs << std::endl;
		
	}
	ifs.close();
	ofs.close();
	return (0);
}
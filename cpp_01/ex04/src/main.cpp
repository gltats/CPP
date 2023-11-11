/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:55:41 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 19:32:22 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileManipulator.hpp"

bool isLettersOnly(const std::string& str) {
	if (str.empty()) {
        std::cout << RED << "Empty Input" << RESET << std::endl;
        return false;
    }
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isalpha(*it) && !isdigit(*it) && !isspace(*it)) {
			std::cout << RED << "You can only search and remplace letters, numbers or spaces" << RESET << std::endl;
            return false; // Contains a non-letter character
        }
    }
    return true; // Contains only letters
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (!isLettersOnly(s1) || !isLettersOnly(s2))
		{
			return(1);
		}
		FileManipulator(filename, s1, s2);
	}
	else
	{
		std::cout << RED << "Please check your input" << RESET << std::endl;
		std::cout << YELLOW << "Example:" << argv[0] << " <filename> <search> <remplace>" << RESET << std::endl;
	}
    return 0;
}

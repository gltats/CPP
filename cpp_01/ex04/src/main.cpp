/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:55:41 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 17:10:31 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileManipulator.hpp"

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1.empty() || s2.empty())
		{
			std::cout << "s1 or s2 cannot be empty." << std::endl;
			return 1;
		}
		FileManipulator(filename, s1, s2);
	}
	else
		std::cout << "check if the arguments are correct" << std::endl;
    return 0;
}

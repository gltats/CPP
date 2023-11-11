/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManipulator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:56:27 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 19:28:17 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEMANIPULATOR_HPP
# define FILEMANIPULATOR_HPP

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define GREEN "\033[1;32m"

#include <string.h>
#include <iostream>
#include <fstream>

class FileManipulator
{
	private:
	    std::string filename;
    	std::string s1;
    	std::string s2;
		void replaceAllOccurrences(std::string& content, const std::string& search, const std::string& replacement);
	public:
		~FileManipulator();
		void processFile();
		FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif

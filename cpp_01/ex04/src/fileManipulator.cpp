/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManipulator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:55:44 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 17:29:32 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileManipulator.hpp"

FileManipulator::FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
	{
		std::cout << "Error: Unable to open the input file: " << filename << std::endl;
		return;
    }
	// Read the content of the file into a string
	std::string fileContent((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
	inputFile.close();
	
	replaceAllOccurrences(fileContent, s1, s2);

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create output file." << std::endl;
        return;
    }
    outputFile << fileContent;
    outputFile.close();
    std::cout << "File manipulation complete. Check " << filename << ".replace" << std::endl;
}

FileManipulator::~FileManipulator()
{}

//npos end of string
void FileManipulator::replaceAllOccurrences(std::string& content, const std::string& search, const std::string& replacement)
{
    size_t pos = 0;
    while ((pos = content.find(search, pos)) != std::string::npos)
	{
        content.replace(pos, search.length(), replacement);
        pos += replacement.length();
    }
}
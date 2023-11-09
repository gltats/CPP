/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManipulator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:56:27 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/09 20:02:29 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEMANIPULATOR_HPP
# define FILEMANIPULATOR_HPP

#include <iostream>

class FileManipulator
{
	private:
	    std::string filename;
    	std::string s1;
    	std::string s2;
	public:
		FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2);
}

#endif
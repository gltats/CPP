/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:22:40 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 19:06:26 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //helps avoid problems related to multiple inclusion of the same header file

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	ideas[100];
		void copyIdeas(const Brain &src);
	public:
		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		~Brain();
		const std::string getIdea(int index) const;
		void setIdea(int index, const std::string idea);
		size_t	size( void );
};

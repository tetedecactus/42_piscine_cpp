/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:07:03 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/15 13:27:06 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

# define BLUE "\033[0;36m"
# define PINK "\033[0;35m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void errMsg( void );	
public:
	void complain( std::string level );
	Harl(/* args */);
	~Harl();
};



#endif
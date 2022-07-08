/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:47:29 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/29 17:47:29 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <unistd.h>
#include <string>

class Brain 
{
private:
    std::string ideas[100];
public:
    Brain( void );
    Brain( Brain const & src );
    virtual ~Brain();

    Brain& operator=( Brain const & rhs );

	void setIdeas( void );
	std::string getIdeas( int index ) const;

};

#endif
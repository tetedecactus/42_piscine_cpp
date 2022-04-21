/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:13:50 by olabrecq          #+#    #+#             */
/*   Updated: 2022/04/01 17:31:10 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>


//Class phonebook conteint un array de class Contact!!
namespace phoneboook
{
    class contact
    {
        private:

        public:
            std::string first_name;
            std::string last_name;
            std::string nickname;
            std::string phone_number;
            std::string darkest_secret;
    //     contact();
    //     // contact(std::string add);
    //     // contact(std::string search);
    //     // contact(std::string exit);
    //     ~contact();
    };
    // contact::contact()
    // {
    // }

    // contact::contact(std::string add)
    // {
    // }

    // contact::contact(std::string search)
    // {
    // }
    
    // contact::contact(std::string exit)
    // {
    // }

    // contact::~contact()
    // {
    // }
}




#endif
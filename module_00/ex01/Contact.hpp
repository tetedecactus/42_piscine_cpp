/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:52 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/04 21:58:36 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_nuber;
	std::string darkest_secret;
public:
	std::string get_info();
	Contact(/* args */);
	~Contact();
};

#endif

// Les functions 'public' sont souvent pour set/get/print info 
// dont ceux-ci sont 'private'
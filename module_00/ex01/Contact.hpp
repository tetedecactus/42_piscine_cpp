/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:52 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/04 21:21:40 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

// The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. 
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
  Contact(/* args */);
  ~Contact();
};

#endif

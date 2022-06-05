/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:52 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/05 18:34:48 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	int indexContact;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:

	// std::string getInfo(std::string contactInfo); // This function get the info asked
	// void setInfo(std::string contactInfo); // This function set the value of the info asked
	std::string infoInput;
	// Setter function
	void setIndexContact();
	void setFirstName();
	void setLastName();
	void setNickName();
	void setPhoneNumber();
	void setDarkestSecret();
	// Getter function
	int getIndexContact() {return indexContact;}
	std::string getFirstName() {return firstName;}
	std::string getLastName() {return lastName;}
	std::string getNickName() {return nickName;}
	std::string getPhoneNumber() {return phoneNumber;}
	std::string getDarkestSecret() {return darkestSecret;}
	// Constructor & ~Destructor
	Contact();
	~Contact();
};

#endif

// Les functions 'public' sont souvent pour set/get/print info 
// dont ceux-ci sont 'private'

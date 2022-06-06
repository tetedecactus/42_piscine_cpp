/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:52 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/06 14:15:56 by olabrecq         ###   ########.fr       */
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

	std::string infoInput;
	// Constructor & ~Destructor
	Contact();
	~Contact();
	
	// Setter function
	void setIndexContact(int index) {indexContact = index;}
	void setFirstName(std::string& infoInput) {firstName = infoInput;}
	void setLastName(std::string& infoInput) {lastName = infoInput;}
	void setNickName(std::string& infoInput) {nickName = infoInput;}
	void setPhoneNumber(std::string& infoInput) {phoneNumber = infoInput;}
	void setDarkestSecret(std::string& infoInput) {darkestSecret = infoInput;}
	// Getter function
	int getIndexContact() {return indexContact;}
	std::string getFirstName() {return firstName;}
	std::string getLastName() {return lastName;}
	std::string getNickName() {return nickName;}
	std::string getPhoneNumber() {return phoneNumber;}
	std::string getDarkestSecret() {return darkestSecret;}
};

#endif

// Les functions 'public' sont souvent pour set/get/print info 
// dont ceux-ci sont 'private'

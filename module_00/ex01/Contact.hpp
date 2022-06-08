/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:11:52 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/07 18:24:00 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
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

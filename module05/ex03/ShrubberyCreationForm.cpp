/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:40:18 by olabrecq          #+#    #+#             */
/*   Updated: 2022/07/26 20:59:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// formulaire de création d’arbustes
// Échelons requis : signature 145, exécution 137

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("formulaire de création d’arbustes", 145, 137)
{
	std::cout << BLUE << "Shrubbery Creation Construction Called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form("formulaire de création d’arbustes", 145, 137)
{
	std::cout << BLUE << "Shrubbery Creation Construction Called with target : " << RESET << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) { *this = src; }

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << RED << "Shrubbery Destructor Called" << RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this == &rhs) 
		return (*this);
    (void)rhs;
    return (*this);
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	
	if ( getIsSigned() == true && executor.getGrade() <= getGradeToExec() )
		makeAsciiTree( executor );
	else
		throw Form::GradeTooLowException();
}


void ShrubberyCreationForm::makeAsciiTree(  Bureaucrat const & executor ) const{
	std::ofstream treeFile;

		treeFile.open(executor.getName() + "_shrubbery");
		if (treeFile.fail())
		{
			std::cerr << "cannot create " << executor.getName() + "_shrubbery" << " file" << std::endl;
			return;
		}
		treeFile << "	     _-_" << '\n'
		 			<<"   /~~   ~~\\" << '\n'
					<< "/~~         ~~\\" << '\n'
					<< "{               }" << '\n'
					<<" \\  _-     -_  /" << '\n'
					<<"   ~  \\ //   ~" << '\n'
					<<"_- -   | | _- _" << '\n'
					<<"  _ -  | |   -_" << '\n'
					<<"      // \\\\"
					<< "file " << (executor.getName() + "_shrubbery") << " have been created" << std::endl;
		treeFile.close();
}


//        _-_
//     /~~   ~~\
//  /~~         ~~\
// {               }
//  \  _-     -_  /
//    ~  \\ //  ~
// _- -   | | _- _
//   _ -  | |   -_
//       // \\
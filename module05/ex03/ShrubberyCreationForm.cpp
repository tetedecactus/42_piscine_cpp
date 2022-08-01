/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:40:18 by olabrecq          #+#    #+#             */
/*   Updated: 2022/08/01 11:20:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// formulaire de création d’arbustes
// Échelons requis : signature 145, exécution 137

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("formulaire de création d’arbustes", 145, 137), _target("The bush")
{
	std::cout << BLUE << "Shrubbery Creation Construction Called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form("formulaire de création d’arbustes", 145, 137), _target(target)
{
	std::cout << BLUE << "Shrubbery Creation Construction Called with target : " << RESET << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form("formulaire de création d’arbustes", 145, 137), _target(src._target) { *this = src; }

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
		makeAsciiTree();
	else {
		if (getIsSigned() == false)
			throw Bureaucrat::FormNotSignedException();
		else
			throw Form::GradeTooLowException();
	}
}

std::string ShrubberyCreationForm::getTarget( void ) const { return _target; }

void ShrubberyCreationForm::makeAsciiTree( void ) const{
	std::ofstream treeFile;

		treeFile.open(getTarget() + "_shrubbery");
		if (treeFile.fail())
		{
			std::cerr << "cannot create " << getTarget() + "_shrubbery" << " file" << std::endl;
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
					<< "file " << (getTarget() + "_shrubbery") << " have been created" << std::endl;
		treeFile.close();
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:21:23 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/26 18:34:13 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string toTarget): AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	target = toTarget;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &idemShru): AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	target = idemShru.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copyShru) {
	std::cout << "ShrubberyCreationForm copy operator called" << std::endl;
	if (this != &copyShru)
		*this = copyShru;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::formExecute() const {
	std::ofstream fileToCreate;
	std::string fileName = this->target + "_shruberry";
	fileToCreate.open(fileName.c_str());
	if (!fileToCreate.is_open()) {
		std::cout << "Failed to open file!" << std::endl;
		return;
	}
	fileToCreate << "       _-_" << std::endl;
	fileToCreate << "    /~~   ~~\\" << std::endl;
	fileToCreate << " /~~         ~~\\" << std::endl;
	fileToCreate << "{               }" << std::endl;
	fileToCreate << " \\  _-     -_  /" << std::endl;
	fileToCreate << "   ~  \\\\ //  ~" << std::endl;
	fileToCreate << "_- -   | | _- _" << std::endl;
	fileToCreate << "  _ -  | |   -_" << std::endl;
	fileToCreate << "      // \\\\" << std::endl;

	fileToCreate.close();
	std::cout << "Shruberry tree created!" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	try
	{
		if (executor.getGrade() <= getExecGrade() && getIsSigned())
			std::cout << executor.getName() << " has the grade to execute the form" << std::endl;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

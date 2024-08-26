/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:20:47 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/26 18:31:52 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("Default"), isSigned(false), signGrade(75), execGrade(75) {
	std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string nameF, int signGradeF, int execGradeF): name(nameF), isSigned(false),
		signGrade(signGradeF), execGrade(execGradeF) {
	if (signGradeF < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (signGradeF > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	if (execGradeF < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (execGradeF > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << nameF << " AForm constructor called" << std::endl;
}

AForm::AForm(const AForm &idemAForm): name(idemAForm.name), signGrade(idemAForm.signGrade), execGrade(idemAForm.execGrade){
	std::cout << "AForm copy constructor called" << std::endl;
	*this = idemAForm;
}

AForm &AForm::operator=(const AForm &copyAForm) {
	std::cout << "AForm copy operator called" << std::endl;
	if (this != &copyAForm)
		this->isSigned = copyAForm.isSigned;
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

void	AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= getSignGrade())
		isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::string AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

int AForm::getSignGrade() const {
	return signGrade;
}

int AForm::getExecGrade() const {
	return execGrade;
}

const char *AForm::FormNotSigned::what() const throw() {
	return "Form not signed!";
}

const char *AForm::GradeTooLowToExec::what() const throw() {
	return "Grade too low to execute!";
}

void AForm::execute(const Bureaucrat &executor) const {
		formExecute();
		std::cout << executor.getName() << " executed " << getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, AForm& AForm) {
	os << AForm.getName() << " " << AForm.getIsSigned() << " " << AForm.getSignGrade() << " " << AForm.getExecGrade() << std::endl;
	return os;
}

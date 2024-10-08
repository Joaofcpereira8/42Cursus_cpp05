/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:39:15 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/26 18:25:11 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Default"), isSigned(false), signGrade(75), execGrade(75) {
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string nameF, int signGradeF, int execGradeF): name(nameF), isSigned(false),
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
	std::cout << nameF << " Form constructor called" << std::endl;
}

Form::Form(const Form &idemForm): name(idemForm.name), signGrade(idemForm.signGrade), execGrade(idemForm.execGrade){
	std::cout << "Form copy constructor called" << std::endl;
	*this = idemForm;
}

Form &Form::operator=(const Form &copyForm) {
	std::cout << "Form copy operator called" << std::endl;
	if (this != &copyForm)
		this->isSigned = copyForm.isSigned;
	return *this;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

void	Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= getSignGrade())
		isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::string Form::getName() {
	return name;
}

bool Form::getIsSigned() {
	return isSigned;
}

int Form::getSignGrade() {
	return signGrade;
}

int Form::getExecGrade() {
	return execGrade;
}

std::ostream& operator<<(std::ostream& os, Form& form) {
	os << form.getName() << " " << form.getIsSigned() << " " << form.getSignGrade() << " " << form.getExecGrade() << std::endl;
	return os;
}

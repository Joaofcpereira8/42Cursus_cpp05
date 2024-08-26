/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:50:14 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/26 17:50:44 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default"), grade(75) {
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

//when a part of code encounters an error or a situation it cannot handle, it "throws" an exception
Bureaucrat::Bureaucrat(std::string addName, int addGrade): name(addName), grade(addGrade) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	std::cout << name << " Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &miniBureau) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = miniBureau;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copyBureau) {
	std::cout << "Bureaucrat copy operator called" << std::endl;
	if (this != &copyBureau) {
		this->grade = copyBureau.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << name << " Bureaucrat destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
		return "Grade too low!";
};

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high!";
};

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incrementGrade() {
	try
	{
		if (grade < 2)
			throw GradeTooHighException();
		grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrementGrade() {
	try
	{
		if (grade > 149)
			throw GradeTooLowException();
		grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
	return os;
}

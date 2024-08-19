/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:42:36 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/19 16:42:37 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &idemIntern) {
	std::cout << "Intern copy constructor called" << std::endl;
	(void) idemIntern;
}

Intern &Intern::operator=(const Intern &copyIntern) {
	std::cout << "Intern copy operator called" << std::endl;
	(void) copyIntern;
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

const char *Intern::FormNotExist::what() const throw() {
	return "Form does not exist!";
}

AForm *Intern::makePresidential(const std::string &target) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeShruberry(const std::string &target) {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomy(const std::string &target) {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makeForm(const std::string &formName, const std::string &targetForm) {
	std::string names[3] = {"PresidentialPardon", "RobotomyRequest", "ShruberryCreation"};

	int num = 0;
	while (num <= 2) {
		if (names[num] == formName)
			break;
		num++;
	}

	switch (num) {
		case 0:
			return (makePresidential(targetForm));
		case 1:
			return (makeRobotomy(targetForm));
		case 2:
			return (makeShruberry(targetForm));
		default:
			throw FormNotExist();
	}
}
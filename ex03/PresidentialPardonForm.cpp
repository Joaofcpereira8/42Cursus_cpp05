/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:22:06 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/26 18:32:39 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string aTarget): AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	target = aTarget;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &idemTarget): AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	target = idemTarget.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copyTarget) {
	std::cout << "PresidentialPardonForm copy operator called" << std::endl;
	if (this != &copyTarget)
		this->target = copyTarget.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try
	{
		if (executor.getGrade() <= getExecGrade() && getIsSigned())
			std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

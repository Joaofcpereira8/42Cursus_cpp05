/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:21:44 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/26 18:33:52 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string aTarget): AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	target = aTarget;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& idemRobot): AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	target = idemRobot.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copyRobot) {
	std::cout << "RobotomyRequestForm copy operator called" << std::endl;
	if (this != &copyRobot)
		this->target = copyRobot.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try
	{
		if (executor.getGrade() <= getExecGrade() && getIsSigned()) {
			// Seed the random number generator with the current time
			std::srand(time(0));

			// Generate a random number, and mod by 2 to get either 0 or 1
			int randomValue = std::rand() % 2;

			std::cout << "*DRILL NOISES*" << std::endl;

			if (randomValue == 0) {
				std::cout << this->target << " has been robotomized!" << std::endl;
			} else {
				std::cout << this->target << " robotomy has failed!" << std::endl;
			}
		}
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

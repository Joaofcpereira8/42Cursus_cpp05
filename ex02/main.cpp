/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:50:37 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/13 15:50:38 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	// Expected behavior
	try {
		Bureaucrat BurA("other", 100);
		ShrubberyCreationForm FormA("Formâge A");
		std::cout << FormA;
		BurA.signForm(FormA);
		BurA.executeForm(FormA);
		//FormA.execute(BurA);
		std::cout << FormA << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "============" << std::endl;
	try {
		Bureaucrat BurA("other", 72);
		RobotomyRequestForm FormA("hellooo");
		std::cout << FormA << std::endl;
		FormA.beSigned(BurA);
		std::cout << FormA << std::endl;
		BurA.executeForm(FormA);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "============" << std::endl;
	try {
		Bureaucrat BurA("other", 24);
		PresidentialPardonForm FormA("hellooo");
		std::cout << FormA << std::endl;
		FormA.beSigned(BurA);
		FormA.execute(BurA);
		std::cout << FormA << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "============" << std::endl;
}
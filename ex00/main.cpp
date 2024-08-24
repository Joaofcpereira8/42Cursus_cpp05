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

int main() {
	try {
		Bureaucrat first("Alice", 1);
		std::cout << first;
		first.incrementGrade();
		std::cout << first;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Caught: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat second("Robert", 1);
		std::cout << second;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Caught: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Caught: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat third("Chris", 151);
		std::cout << third;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Caught: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Caught: " << e.what() << std::endl;
	}
}
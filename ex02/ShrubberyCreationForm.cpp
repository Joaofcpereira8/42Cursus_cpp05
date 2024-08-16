/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:21:23 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/16 16:21:24 by jofilipe         ###   ########.fr       */
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
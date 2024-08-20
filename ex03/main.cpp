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
# include "Intern.hpp"

int main() {
	try {
		Intern someRandomIntern;
		AForm* rrf;
		//rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		//rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
		rrf = someRandomIntern.makeForm("ShruberryCreation", "Bender");
		//rrf = someRandomIntern.makeForm("SOMETHING", "Bender");
		rrf->formExecute();
		delete rrf;
	} catch (const Intern::FormNotExist& e) {
		std::cerr << e.what() <<std::endl;
	}
}
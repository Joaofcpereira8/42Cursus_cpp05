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
#include "Form.hpp"

int main() {
	try
	{
		Bureaucrat valid("valid", 100);
		Form Formula("Formula", 90, 110);
		Form test("teste", 150, 145);
		std::cout << Formula;
		valid.signForm(Formula);
		std::cout << Formula << std::endl;
		valid.signForm(test);
		std::cout << test;
		valid.decrementGrade();
		std::cout << valid;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
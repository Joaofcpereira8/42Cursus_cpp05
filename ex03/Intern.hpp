/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:42:42 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/19 16:42:43 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& idemIntern);
		Intern &operator=(const Intern& copyIntern);
		~Intern();

		static AForm *makeForm(const std::string &formName, const std::string &targetForm);

		static AForm *makePresidential(const std::string &target);
		static AForm *makeRobotomy(const std::string &target);
		static AForm *makeShruberry(const std::string &target);

		class FormNotExist: public std::exception {
		public:
			virtual const char* what() const throw();
		};
};

#endif

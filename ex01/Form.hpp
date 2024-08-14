/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:36:25 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/14 15:36:26 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;
	public:
		Form();
		Form(std::string nameF, bool isSignedF, int signGradeF, int execGradeF);
		Form(const Form& idemForm);
		Form &operator=(const Form& copyForm);
		~Form();

		void beSigned(Bureaucrat& bureaucrat);

		std::string getName(void);
		bool getIsSigned(void);
		int getSignGrade(void);
		int getExecGrade(void);

		class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, Form& form);

#endif //FORM_HPP
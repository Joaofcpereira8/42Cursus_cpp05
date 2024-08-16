/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:20:53 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/16 16:20:54 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;
	public:
		AForm();
		AForm(std::string nameF, int signGradeF, int execGradeF);
		AForm(const AForm& idemAForm);
		AForm &operator=(const AForm& copyAForm);
		~AForm();

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

std::ostream& operator<<(std::ostream& os, AForm& AForm);

#endif //AFORM_H
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:21:53 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/16 16:21:54 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTEMYREQUESTFORM_HPP
# define ROBOTEMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm: public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string aTarget);
		RobotomyRequestForm(const RobotomyRequestForm& idemRobot);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copyRobot);
		~RobotomyRequestForm();

		void execute(Bureaucrat const & executor) const;
};

#endif
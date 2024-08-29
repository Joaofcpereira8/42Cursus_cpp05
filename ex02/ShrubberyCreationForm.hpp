/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:21:31 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/16 16:21:32 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm {
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string toTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm& idemShru);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copyShru);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
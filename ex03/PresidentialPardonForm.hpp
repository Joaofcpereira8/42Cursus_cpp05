/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:22:13 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/16 16:22:14 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
private:
	std::string target;
public:
	PresidentialPardonForm(std::string aTarget);
	PresidentialPardonForm(const PresidentialPardonForm& idemTarget);
	PresidentialPardonForm &operator=(const PresidentialPardonForm& copyTarget);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};

#endif
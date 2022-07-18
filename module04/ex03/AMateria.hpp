/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:04:23 by marvin            #+#    #+#             */
/*   Updated: 2022/07/14 17:04:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class AMateria
{
    protected:

    public:
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

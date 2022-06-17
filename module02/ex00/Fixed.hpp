/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:48:03 by olabrecq          #+#    #+#             */
/*   Updated: 2022/06/16 18:48:03 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
    int Fixe; //pour stocker la valeur du nombre en virgule fixe
    const static int constStatic; // pour stocker le nombre de bits de la partie fractionnaire, et dont la valeur sera toujours le littéral entier 8
public:
    Fixed(/* args */);
    ~Fixed();
    // Un constructeur de recopie.
    // ◦ Une surcharge de l’opérateur d’affectation.
    // ◦ Un destructeur.
    // ◦ Une fonction membre int getRawBits( void ) const;
    // qui retourne la valeur du nombre à virgule fixe sans la convertir.
    // ◦ Une fonction membre void setRawBits( int const raw );
    // qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}


#endif

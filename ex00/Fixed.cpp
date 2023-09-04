/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:25:56 by jholl             #+#    #+#             */
/*   Updated: 2022/03/31 22:10:33 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
_val_fixed_p(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & to_cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_cpy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & equal)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_val_fixed_p = equal.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const rawBits)
{
	_val_fixed_p = rawBits;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_val_fixed_p);
}


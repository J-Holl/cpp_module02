/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:25:56 by jholl             #+#    #+#             */
/*   Updated: 2022/05/17 12:47:43 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
_val_fixed_p(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int init_int)
{
	std::cout << "Int constructor called" << std::endl;
	_val_fixed_p = init_int << _number_bits;
}


Fixed::Fixed(const float init_float)
{
	std::cout << "Float constructor called" << std::endl;
	_val_fixed_p = round(init_float * (1 << _number_bits));
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

float	Fixed::toFloat(void) const
{
	return (float(_val_fixed_p) / float(1 << _number_bits));
}


int	Fixed::toInt(void) const
{
	return (_val_fixed_p >> _number_bits);
}

int		Fixed::getRawBits(void) const
{
	return (_val_fixed_p);
}

std::ostream & operator<<(std::ostream & os, Fixed const & to_float)
{
	os << to_float.toFloat();
	return (os);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:21:17 by jholl             #+#    #+#             */
/*   Updated: 2022/05/16 22:23:09 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int init_int);
		Fixed(const float init_float);
		Fixed(Fixed const & to_cpy);
		~Fixed(void);
		Fixed & operator=(Fixed const & equal);

		bool operator>(Fixed const & fixed);
		bool operator<(Fixed const & fixed);
		bool operator>=(Fixed const & fixed);
		bool operator<=(Fixed const & fixed);
		bool operator!=(Fixed const & fixed);
		bool operator==(Fixed const & fixed);
		Fixed operator+(Fixed const & fixed);
		Fixed operator-(Fixed const & fixed);
		Fixed operator*(Fixed const & fixed);
		Fixed operator/(Fixed const & fixed);
		//postfix inc-dec-rement
		Fixed operator++(int);
		Fixed operator--(int);
		//prefix inc-dec-rement
		Fixed & operator++(void);
		Fixed & operator--(void);

		int getRawBits(void) const;
		void setRawBits(int const rawBits);
		float toFloat(void) const;
		int toInt(void) const;
		static const Fixed & min(Fixed const & a, Fixed const & b);
		static const Fixed & max(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed & min(Fixed & a, Fixed & b);

	private:
		int _val_fixed_p;
		static const int _number_bits = 8;
};

std::ostream & operator<<(std::ostream & os, Fixed const & to_float);

#endif

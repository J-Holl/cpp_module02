/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:21:17 by jholl             #+#    #+#             */
/*   Updated: 2022/04/13 17:37:00 by jholl            ###   ########.fr       */
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

		int getRawBits(void) const;
		void setRawBits(int const rawBits);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _val_fixed_p;
		static const int _number_bits = 8;
};

std::ostream & operator<<(std::ostream & os, Fixed const & to_float);

#endif

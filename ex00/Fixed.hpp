/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:21:17 by jholl             #+#    #+#             */
/*   Updated: 2022/03/31 22:12:28 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class		Fixed;

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & to_cpy);
		~Fixed(void);
		Fixed & operator=(Fixed const & equal);

		int getRawBits(void) const;
		void setRawBits(int const rawBits);

	private:
		int _val_fixed_p;
		static const int _number_bits = 8;
};

#endif

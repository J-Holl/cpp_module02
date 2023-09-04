/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:12:38 by jholl             #+#    #+#             */
/*   Updated: 2022/05/18 15:22:13 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Fixed.h"

int main( void )
{


	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << Fixed::min( Fixed(-3), Fixed(2.05f)) << std::endl;

	std::cout << "Comparators operator" << std::endl;
	std::cout << "1 < -1 true or false:"<< (Fixed(1) < Fixed (-1)) << std::endl;
	std::cout << "1 > -1 true or false:"<< (Fixed(1) > Fixed (-1)) << std::endl;
	std::cout << "1 >= 1 true or false:"<< (Fixed(1) >= Fixed (1)) << std::endl;
	std::cout << "1 <= 1 true or false:"<< (Fixed(1) <= Fixed (1)) << std::endl;

	
	std::cout << "Arithmetic operator" << std::endl;
	std::cout << Fixed(3.12f) * Fixed(1.083f) << std::endl;
	std::cout << Fixed(3.12f) / Fixed(1.083f) << std::endl;
	std::cout << Fixed(3.12f) + Fixed(1.083f) << std::endl;
	std::cout << Fixed(3.12f) - Fixed(1.083f) << std::endl;

	return 0;
}

#include "Fixed.hpp"

int main()
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a << "\n";
	// std::cout << ++a << "\n";
	// std::cout << b << "\n";
	std::cout << b << std::endl;
	//You can call a Static member function without using an object
	// std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}
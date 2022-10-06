#include <iostream>

int main()
{
	int a = 10;
	int b = 10;

	std::cout << a << " " << b << std::endl;//   10 10 

	int c = a++;
	std::cout << a << " " << b << " " << c << std::endl; // 11 10 10

	c = ++b;
	std::cout << a << " " << b << " " << c << std::endl;  // 11 11 11

	return 0;
}
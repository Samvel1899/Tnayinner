#include <iostream>

int func() {
	int a = 45678;
	short b = 64;
	char c = 'k';
	long d = 1200500;
	float e = 32.8;
	double f = 896.1567;
	bool g = true;

	std::cout << "\t" << a << std::endl;
	std::cout << "\t" << b << std::endl;
	std::cout << "\t" << c << std::endl;
	std::cout << "\t" << d << std::endl;
	std::cout << "\t" << e << std::endl;
	std::cout << "\t" << f << std::endl;
	std::cout << "\t" << g << std::endl;
	
	return 0;
}

int main()
{
	func();
	return 0;
}


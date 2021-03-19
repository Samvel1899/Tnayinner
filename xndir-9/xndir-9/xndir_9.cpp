#include <iostream>

int func() {
	int num1 = 12;
	int num2 = 23;

	std::cout << "\t" << num1 + num2 << std::endl;
	std::cout << "\t" << num1 - num2 << std::endl;
	std::cout << "\t" << num1 * num2 << std::endl;
	std::cout << "\t" << num1 / num2 << std::endl;
	std::cout << "\t" << num1 % num2 << std::endl;
	
	return 0;
}

int main()
{
	func();

	return 0;
}
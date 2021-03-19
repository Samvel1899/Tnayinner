#include<iostream>
#include<string>

int func() {
	int num1;
	std::string str;

	std::cin >> num1;
	std::cin >> str;

	std::cout << "\n" << str << std::endl;
	std::cout << num1;

	return 0;
}

int main()
{
	func();
	return 0;
}


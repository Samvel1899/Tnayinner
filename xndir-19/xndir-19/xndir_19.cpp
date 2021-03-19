#include <iostream>
#include <string>


int func() {

	std::cout << "Enter your name" << std::endl;
	std::string name;
	std::cin >> name;

	std::cout << "\nEnter your age" << std::endl;
	int age;
	std::cin >> age;

	std::cout << "\nHallo " << name;



	return 0;
}

int main() {
	func();
	return 0;
}
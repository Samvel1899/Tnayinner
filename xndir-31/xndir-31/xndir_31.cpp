#include<iostream>
#include<string>

int func() {

	int num;
	std::cin >> num;

	std::string name;
	std::cin >> name;

	for (int i = 1; i <= num; i++) {
		std::cout << name << " ";
	}


	return 0;
}

int main()
{
	func();
	return 0;
}


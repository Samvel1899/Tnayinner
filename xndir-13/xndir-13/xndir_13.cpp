#include <iostream>

int func() {
	int x;
	std::cin >> x;

	int y;
	std::cin >> y;

	if (x > y) {
		std::cout << "\nx > y = " << x;
	}
	else if (y > x)
	{
		std::cout << "\ny > x = " << y;
	}

	return 0;
}

int main() {
	func();
	return 0;
}
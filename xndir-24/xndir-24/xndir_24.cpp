#include<iostream>

int func() {
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {
			std::cout << i << " ";
		}
	}

	return 0;
}

int main() {
	func();
	return 0;
}
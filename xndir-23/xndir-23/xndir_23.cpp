#include<iostream>

int func() {
	for(int i = 100; i >= 0; i--) {
		std::cout << i << " ";
	}

	return 0;
}

int main() {
	func();
	return 0;
}
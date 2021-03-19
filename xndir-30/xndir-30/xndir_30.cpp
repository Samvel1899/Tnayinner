#include<iostream>

int func() {

    int num;
    std::cin >> num;

    if (num % 2 == 0) {
        for (int i = 0; i <= 100; i++) {
            std::cout << i << " ";
        }
    }
    else if (num % 2 != 0) {
        for (int i = 100; i >= 0; i--) {
            std::cout << i << " ";
        }
    }

    return 0;
}

int main()
{
    func();
    return 0;
}


#include<iostream>

int func() {

    int num;
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "Number is even";
    }
    else if (num % 2 != 0) {
        std::cout << "Number is odd";
    }

    return 0;
}

int main()
{
    func();
    return 0;
}


#include <iostream>

int func() {
    int num1;
    std::cin >> num1;

    int num2;
    std::cin >> num2;

    int num3;
    std::cin >> num3;


    if (num2 == num3 && num1 > num2 && num1 > num3) {
        std::cout << num1;
    }
    if (num1 == num3 && num2 > num1 && num2 > num3) {
        std::cout << num2;
    }
    if (num1 == num2 && num3 > num1 && num3 > num2) {
        std::cout << num3;
    }
    if (num1 == num2 && num3 < num2 && num3 < num1) {
        std::cout << num1;
    }
    if (num2 == num3 && num1 < num2 && num1 < num3) {
        std::cout << num2;
    }
    if (num1 == num3 && num2 < num1 && num2 < num3) {
        std::cout << num3;
    }


    return 0;
}

int main()
{
    func();
    return 0;
}
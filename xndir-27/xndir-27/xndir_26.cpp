#include <algorithm> 
#include<iostream>
#include<string>
int main()
{
    bool equal = true;
    int num1;
    int num2;
    int num3;
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    if (num1 != num2 && num1 != num3 && num2 != num3) {
        std::cout << "\n" << num3 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num1 << std::endl;
    }
    if (num1 != num2 && num1 != num3 && num2 == num3) {
        std::cout << "\n" << num3 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num1 << std::endl;
    }
    if (num1 == num2 && num1 != num3 && num2 != num3) {
        std::cout << "\n" << num3 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num1 << std::endl;
    }
    if (num1 != num2 && num1 == num3 && num2 != num3) {
        std::cout << "\n" << num3 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num1 << std::endl;
    }
    if (num1 == num2 && num1 == num3 && num2 == num3) {
        std::cout << "\n" << equal;
    }
    return 0;
}
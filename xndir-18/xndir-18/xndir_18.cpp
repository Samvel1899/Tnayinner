#include <iostream>

int func() {
    int num1;
    std::cin >> num1;

    int num2;
    std::cin >> num2;

    int num3;
    std::cin >> num3;

    int num4;
    std::cin >> num4;


    if (num1 + num2 + num3 + num4 == 0) {
        if (num1 < num2 && num1 < num3 && num1 < num4) {
            std::cout << "\nminimum value =" << num1;
        }
        if (num2 < num1 && num2 < num3 && num2 < num4) {
            std::cout << "\nminimum value =" << num2;
        }
        if (num3 < num1 && num3 < num2 && num3 < num4) {
            std::cout << "\nminimum value =" << num3;
        }
        if (num4 < num1 && num4 < num2 && num4 < num3) {
            std::cout << "\nminimum value =" << num4;
        }
    }
    else if (num1 + num2 + num3 + num4 != 0) {
        std::cout << "\nNumbers sum is not equal 0";
    }

    return 0;

}

int main()
{
    func();
    return 0;
}
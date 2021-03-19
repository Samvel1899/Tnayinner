#include <iostream>

using namespace std;

int func() {
    int num1;
    int num2;
    int num3;

    cout << "\nEnter the num1" << endl;
    cin >> num1;

    cout << "\nEnter the num2" << endl;
    cin >> num2;

    cout << "\nEnter the num3" << endl;
    cin >> num3;

    cout << "\nsum = " << num1 + num2 + num3 << endl;

    return 0;
}

int main()
{
    func();
    return 0;
}
#include <iostream>
using namespace std;

int func() {
    int a;
    cout << "Enter a number1" << endl;
    cin >> a;
    cout << "You entered " << a << endl;

    long b;
    cout << "\nEnter a number2" << endl;
    cin >> b;
    cout << "You entered " << b << endl;

    char c;
    cout << "\nEnter a 1 letter" << endl;
    cin >> c;
    cout << "You entered " << c << endl;

    return 0;
}

int main()
{
    func();

    return 0;
}
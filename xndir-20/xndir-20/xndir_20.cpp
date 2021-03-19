#include <iostream>
#include <cctype>       // для функции toupper
#include <string>

// -------------TARBERAK 1 ------------------

using namespace std;

int main()
{
    char arr[30];
    cin >> arr;

    cout << "\nOriginal String:\n" << arr << endl;
    cout << "\nString in UPPERCASE:\n";
    for (int x = 0; x < strlen(arr); x++)
        putchar(toupper(arr[x]));

    return 0;
}


// -------------TARBERAK 2 ------------------

//int func() {
//    int i = 0;
//    std::string name;
//    std::cin >> name;
//    char c;
//    while (name[i])
//    {
//        c = name[i];
//        putchar(toupper(c));
//        i++;
//    }
//    return 0;
//}
//
//int main() {
//    func();
//    return 0;
//}


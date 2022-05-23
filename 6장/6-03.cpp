#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 5;

    bool b1, b2, b3, b4, b5, b6;
    b1 = a > b;
    b2 = a >= b;
    b3 = a < b;
    b4 = a <= b;
    b5 = a == b;
    b6 = a != b;

    cout << boolalpha;

    cout << a << " > " << b << " --> " << b1 << "\n";
    cout << a << " >= " << b << " --> " << b2 << "\n";
    cout << a << " < " << b << " --> " << b3 << "\n";
    cout << a << " <= " << b << " --> " << b4 << "\n";
    cout << a << " == " << b << " --> " << b5 << "\n";
    cout << a << " != " << b << " --> " << b6 << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    float f = 66.89f;
    char c = 'C';

    cout << "int i = " << i << "\n";
    cout << "(char)i = " << (char)i << "\n";
    cout << "(bool)i = " << (bool)i << "\n\n";
    
    cout << "float f = " << f << "\n";
    cout << "(int)f = " << (int)f << "\n\n";
    
    cout << "char c = " << c << "\n";
    cout << "(int)c = " << (int)c << "\n";

    return 0;
}

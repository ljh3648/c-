#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    float f = 66.89f;
    char c = 'C';
    bool b = true;

    int f2i, c2i, b2i;
    float i2f, c2f, b2f;
    char i2c, f2c, b2c;
    bool i2b, f2b, c2b;

    i2f = i;
    i2c = i;
    i2b = i;

    f2i = f;
    f2c = f;
    f2b = f;

    c2i = c;
    c2f = c;
    c2b = c;

    b2i = b;
    b2f = b;
    b2c = b;

    cout << "int : " << i << "\n\tto float : " << i2f << "\n\tto char : " << i2c << "\n\tto bool : " << i2b << "\n\n";
    cout << "float : " << f << "\n\tto int : " << f2i << "\n\tto char : " << f2c << "\n\tto bool : " << f2b << "\n\n";
    cout << "char : " << c << "\n\tto int : " << c2i << "\n\tto float : " << c2f << "\n\tto bool : " << c2b << "\n\n";
    cout << "bool : " << b << "\n\tto int : " << b2i << "\n\tto float : " << b2f << "\n\tto char : " << b2c << "\n\n";

    return 0;
}

#include <iostream>
using namespace std;


int main() {
    char c = 'A';
    int a = c;          //Implicit conversion
    cout << "Value of A: " << a << endl;

    double d = 100.99;
    int b = (int)d;       //Explicit conversion
    cout << "Value after casting double to int: " << b << endl;

    return 0;
}

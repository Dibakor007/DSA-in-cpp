#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    int b = a++;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    int f = a--;
    cout << "Value of a: " << a << endl;
    cout << "Value of f: " << f << endl;

    int c;
    cout << "Enter c: ";
    cin >> c;
    int d = ++c;
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;

    int e = --c;
    cout << "Value of c: " << c << endl;
    cout << "Value of e: " << e << endl;
    
    return 0;
    
}
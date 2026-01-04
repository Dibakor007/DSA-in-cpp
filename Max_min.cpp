#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Maximum: " << a << endl;
        cout << "Minimum: " << b << endl;
    } else if (b > a) {
        cout << "Maximum: " << b << endl;
        cout << "Minimum: " << a << endl;
    } else {
        cout << "Both numbers are equal: " << a << endl;
    }
    return 0;
}
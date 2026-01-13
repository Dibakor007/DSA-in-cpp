#include<iostream>
using namespace std;

int main() {
    int p, r, t;
    cout << "Enter Principal amount: ";
    cin >> p;
    cout << "Enter Rate of interest: ";
    cin >> r;
    cout << "Enter Time period in years: ";
    cin >> t;

    int SI = p * r * t / 100;
    if (p < 0 || r < 0 || t < 0) {
        cout << "Error: Principal, Rate, and Time must be non-negative." << endl;
        return 1;
    }
    cout << "Simple Interest is: " << SI << endl;
    return 0;
}
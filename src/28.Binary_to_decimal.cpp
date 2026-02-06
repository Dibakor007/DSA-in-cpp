#include<iostream>
#include<cmath>
using namespace std;

int BinarytoDecimal(int n) {
    int decimalNumber = 0, j= 0, remainder;
    while(n != 0) {
        remainder = n % 10;
        n = n / 10;
        decimalNumber = decimalNumber + remainder * pow (2, j);
        j++;
        

    }
    return decimalNumber;
}

int main() {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    cout<<"Decimal equivalent: "<<BinarytoDecimal(n);
    return 0;
}
#include<iostream>
using namespace std;

int decimalToBinary(int n) {
    int binaryNumber = 0;
    int placeValue = 1;

    while (n > 0) {
        int lastBit = n % 2;
        binaryNumber = binaryNumber + lastBit * placeValue;
        placeValue = placeValue * 10;
        n /= 2;
    }

    return binaryNumber;
}
int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binaryNumber = decimalToBinary(decimalNumber);
    cout << "Binary representation: " << binaryNumber << endl;

    return 0;
}
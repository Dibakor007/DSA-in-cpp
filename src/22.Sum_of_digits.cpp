#include<iostream>
using namespace std;

int SumofDigits(int n) {

    int digitSum = 0;
    while (n > 0){
        int lastDigit = n % 10;
        n = n / 10;
        digitSum += lastDigit;

    }
    return digitSum;
}
int main()  {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits is: " << SumofDigits(n) << endl;

    return 0;
}

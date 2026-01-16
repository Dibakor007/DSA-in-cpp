#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    bool isPalindrome = true;
    int original = n;
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original != reversed) {
        isPalindrome = false;
    }
    if (isPalindrome) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }
    return 0;
}
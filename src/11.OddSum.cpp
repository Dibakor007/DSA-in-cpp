#include<iostream>
using namespace std;

int main() {
    int n;
    int OddSum = 0;
    cout << "Enter number: ";
    cin >> n;

    for(int i = 0; i <= n; i++) {
        if(i % 2 != 0) {
            OddSum += i;
        }
    }
    cout << "Sum of odd numbers = " << OddSum << endl;

    return 0;
}
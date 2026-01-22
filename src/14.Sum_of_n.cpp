#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    cout << "Sum of " << n << " divisible by 3 " << " is: " << sum << endl;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;
    while(count < n){
        count++;
        sum += count;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
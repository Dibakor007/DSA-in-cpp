#include <iostream>
using namespace std;

long long int nthFibonacci(int n){
    if (n <= 0) return 0;
    if (n == 1) return 1;

    long long int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long int result = nthFibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    return 0;
}
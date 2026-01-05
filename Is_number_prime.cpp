#include<iostream>
using namespace std;

int main(){
    int n, i=2;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;
    while(i <= n-1){
        if(n % i == 0){
            cout << n << " is not a prime number." << endl;
            isPrime = false;
            break;
        }
        else{
            i+=1;
        }
    }
    if(isPrime){
        cout << n << " is a prime number." << endl;
    }
    return 0;
    
}
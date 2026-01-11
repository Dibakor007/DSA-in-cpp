#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter age: ";
    cin >> n;
    if(n <= 0 || n >= 100){
        cout << "Invalid input. Please enter a valid age." << endl;
        return -1;
    }
    if(n <= 18){
        cout << "You are not eligible to get a driving license." << endl;
        return 0;
    }
    cout << "You are eligible to get a driving license." << endl;
    return 1;
}
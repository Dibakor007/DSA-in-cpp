#include<iostream>
using namespace std;

int a= 1010, b = 0101; 
int x = 10, y = 5;

void fun() {
    
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (x ^ y) << endl;
    cout << (x >> y) << endl; 
    cout << (x << y) << endl; 
}

int main() {
    fun();
    return 0;
}
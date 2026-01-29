#include<iostream>
using namespace std;

void changeX(int x){
    x = 2*x;
    cout << "X = " << x << endl;
}


int main() {
    int x = 10;
    changeX(x);
    cout << "X in main = " << x << endl;
    
    return 0;
}
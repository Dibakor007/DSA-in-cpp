#include<iostream>
using namespace std;

int main() {
    int n;
    for(int i = 1; i <= 5; i++) {
        int m = 5;
        for(int m = 1; m <= i; m++) {
            cout << "* ";
        }
        cout << endl;
    }

}
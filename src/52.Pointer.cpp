#include<iostream>
#include<vector>
using namespace std;

int main() {

    int a = 10;
    int *p = &a;
    int **q = &p;
    int arr[] = {10, 20, 30, 40};
    int *pt = arr;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;
    cout << *(pt + 1) << endl;
    cout << *(pt + 3) << endl;
    return 0;
}
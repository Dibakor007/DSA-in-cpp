#include<iostream>
using namespace std;

int main() {
    int smallest = INT_MAX;     // Initialize smallest to the maximum integer value
    int arr[6]={5, 15, 22, 1, -15, 24};
    int size = 6;

    for(int i=0; i<size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "The smallest element: " << smallest << endl;

    return 0;
}
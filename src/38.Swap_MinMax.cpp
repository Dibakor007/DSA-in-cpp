#include<iostream>
using namespace std;

void swapArray(int arr[], int size) {
    if (size <= 1)
        return;

    int min=0, max=0;
    for(int i= 1; i<size; i++){
        if (arr[i] < arr[min]){
            min = i;
        }
        if (arr[i] > arr[max]){
            max = i;
        }
    }
    swap(arr[min], arr[max]);
}

int main() {
    int arr[] = {3, 4, 6, 7, 9, 5, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    swapArray(arr, size);

    cout << "Swapped array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
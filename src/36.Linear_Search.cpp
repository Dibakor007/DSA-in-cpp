#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int result = LinearSearch(arr, size, target);
    if (result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
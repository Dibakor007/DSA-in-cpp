#include<iostream>
using namespace std;

void IntersectionArray(int arr1[], int arr2[], int size1, int size2) {
    cout << "Intersection: ";
    
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {4, 5, 7, 9, 8, 6};
    int arr2[] = {3, 2, 1, 6, 8, 9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    IntersectionArray(arr1, arr2, size1, size2);

    return 0;
}
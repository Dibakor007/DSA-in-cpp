#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &arr, int n){
    bool isSwap = false;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }  
        }

        if(!isSwap){
            return;
        }
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    BubbleSort(arr, n);

    cout << "Sorted Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
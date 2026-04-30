#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int st=0, end=arr.size()-1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(target > arr[mid]){
            st = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }

    return -1;   
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array elemnts: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    cout << "Value found at index: " << binarySearch(arr, target) << endl;

    return 0;
}
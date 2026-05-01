#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int> arr, int target, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;

        if(target > arr[mid]){
            return recBinarySearch(arr, target, mid+1, end);
        }
        else if(target < arr[mid]){
            return recBinarySearch(arr, target, st, mid-1);
        }
        else{
            return mid;
        }
    }

    return -1;   
}

int main() {
    vector<int> arr = {-1, 0, 4, 7, 9, 11, 15};
    int target = 9;

    cout << "Value found at index: " << recBinarySearch(arr, target, 0, arr.size()-1) << endl;

    return 0;
}
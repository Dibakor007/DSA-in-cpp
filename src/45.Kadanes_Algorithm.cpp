#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    int curSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        curSum += arr[i];
        maxSum = max(curSum, maxSum);

        if(curSum < 0){
            curSum = 0;
        }
    }
    cout << "Max sum of subArray: " << maxSum << endl;
}
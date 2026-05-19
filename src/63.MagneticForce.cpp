#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
        int cows = 1, lastStallPos = arr[0];

        for(int i = 0; i < N; i++){
            if(arr[i] - lastStallPos >= minAllowedDist){
                cows++;
                lastStallPos = arr[i];
            }

            if(cows == C){
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int> &arr, int C) {
        int N = arr.size();
        sort(arr.begin(), arr.end());
        int st = 1, end = arr[N-1] - arr[0], ans = -1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if (isPossible(arr, N, C, mid)){
                ans = mid;
                st = mid + 1; 
            } else {
                end = mid - 1; 
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << sol.maxDistance(arr, C) << endl; 
    return 0;
}
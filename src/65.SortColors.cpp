#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n = nums.size();
    bool isSwap = false;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                isSwap = true;
            }  
        }

        if(!isSwap){
            return;
        }
    }
}    
};

int main() {
    Solution sol;
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << "Sorted Colors: ";
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
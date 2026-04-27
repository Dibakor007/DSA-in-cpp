#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int prefix = 1;
        int suffix = 1;

        //prefix => ans
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        //suffix => ans
        for(int i=n-2; i>=0; i--){
            suffix = suffix * nums[i+1];
            ans[i] *= suffix;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<int> result = sol.productExceptSelf(nums);

    cout << "Product of array except self: ";
    for(int i=0; i<n; i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums;
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int val_to_remove;
    cout << "Value to remove: ";
    cin >> val_to_remove;
    
    cout << "\nOriginal array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << "\n";
    
    int k = sol.removeElement(nums, val_to_remove);
    cout << "New length (k): " << k << endl;
    
    cout << "Modified array's " << k << " elements): ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
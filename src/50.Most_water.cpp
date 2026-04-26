#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp=0, rp=height.size()-1;

        while(lp < rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        
        return maxWater;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of container: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter containers: ";
    for(int i=0; i<n; i++){
        cin >> height[i];
    }

    cout << "Max Water: " << sol.maxArea(height) << endl;

    return 0;
}
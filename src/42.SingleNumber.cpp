#include<iostream>
#include<vector>
using namespace std;

class solution{
public:
    int SingleNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            result = result ^ nums[i];
        }
        return result;
    }

};

int main() {
    solution sol;

    vector<int> myNums = {4, 1, 2, 1, 2};
    int answer = sol.SingleNumber(myNums);
    
    cout << "The single number is: " << answer << endl;

    return 0;
}
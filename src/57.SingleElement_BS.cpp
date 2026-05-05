#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if(n == 1) return A[0];

        int st = 0, end = n-1;
        while(st <= end){
            int mid = st + (end-st)/2;

            if(mid == 0 && A[0] != A[1]) return A[mid];
            if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];
            if(A[mid-1] != A[mid] && A[mid] != A[mid+1]) return A[mid];

            if(mid % 2 == 0){
                if(A[mid-1] == A[mid]){
                    end = mid -1;
                } else{
                    st = mid +1;
                }
            } else {
                if(A[mid-1] == A[mid]) {
                    st = mid +1;
                } else {
                    end = mid -1;
                }
            }
        }

        return -1;
    }
};

int main() {
    int n;
    
    cout << "Enter the total number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    vector<int> A(n);
    cout << "Enter the " << n << " sorted elements (separated by spaces): ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    Solution sol;
    int result = sol.singleNonDuplicate(A);

    if (result != -1) {
        cout << "\nThe single non-duplicate element is: " << result << endl;
    } else {
        cout << "\nNo single non-duplicate element found (invalid array)." << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n=arr.size();
    int pm = 0;
    int sm = 0;
    for(int i=0; i<n; i++){
        pm += arr[i][i];
        sm += arr[i][n-1-i];
    }
    return abs(pm - sm);
}

int main()
{
    int n;
    cout << "Enter the square 2D array size: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    int result = diagonalDifference(arr);
    cout << "Difference of diagonal: " << result << endl;
    return 0;
}
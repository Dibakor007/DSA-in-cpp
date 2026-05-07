#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
    int n = arr.size();
    double plus=0, minus=0, zero=0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            minus++;
        } else if(arr[i] > 0){
            plus++;
        } else{
            zero++;
        }
    }
    cout << fixed << setprecision(6);
    
    cout << plus / n << endl;
    cout << minus / n << endl;
    cout << zero / n << endl;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr);
    
    return 0;
}

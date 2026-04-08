#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<char> ch = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size of character vector = " << ch.size() <<endl;
    cout << "Charater vector: ";
    for(char val : ch){
        cout << val << " ";
    }

    vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "\nInteger vector value: ";
    for(int i : vec){
        cout << i << " ";
    }
    return 0;
}
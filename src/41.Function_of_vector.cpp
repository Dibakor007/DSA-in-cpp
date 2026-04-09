#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(15);
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);

    cout << "After push_back vector size = " << vec.size() ;
    vec.pop_back(); 
    
    cout << "\n After pop_back vector size = " << vec.size() ;

    cout << "\n All values of vector: ";
    for(int val : vec) {
        cout << val << " ";
    }
    
    cout << "\n Front value: " << vec.front() ;
    cout << "\n Value at index 1: " << vec.at(2) ;
    cout << "\n Back value of vector: " << vec.back() << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if((ch >= 'a' && ch <= 'z') ) {
        cout << ch << " is small letter." << endl;
    } else if((ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is capital letter." << endl;
    } else {
        cout << ch << " is not an alphabet." << endl;
    }
}
#include<iostream>
#include<cmath>
using namespace std;

int DecimaltoBinary(int n) {

    int binary = 0;
    int i = 0;

    if (n >= 0) {
        while (n > 0) {
            binary = binary + (n % 2) * pow(10, i);
            n /= 2;
            i++;
        }
    }
    else {
        int temp = abs(n);
        int bits = 0;

        while (temp > 0) {
            temp /= 2;
            bits++;
        }

        int value = pow(2, bits) + n;

        while (value > 0) {
            binary = binary + (value % 2) * pow(10, i);
            value /= 2;
            i++;
        }
    }

    return binary;
}

int main() {
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    int binary = DecimaltoBinary(n);

    cout << "Binary representation of " << n << " is: "
         << binary << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int op;
    cout << "1. Convert decimal to binary\n2. Convert binary to decimal\n";
    cout << "Choice: ";
    cin >> op;
    
    if (op == 1) {
        int deci_val;
        int binary_val = 0, power = 1;
        cout << "Decimal value: ";
        cin >> deci_val;
        while (deci_val > 0) {
            binary_val += (deci_val % 2)*power;
            power *= 10;
            deci_val /= 2;
        }
        cout << binary_val << "\n";
    } else if (op == 2) {
        int binary_val;
        int deci_val = 0, power = 1;
        cout << "Binary value: ";
        cin >> binary_val;
        while (binary_val > 0) {
            deci_val += (binary_val % 10)*power;
            power *= 2;
            binary_val /= 10;
        } 
        cout << deci_val << "\n";
    } else {
        cout << "Invalid Choice\n";
    }

    return 0;
}
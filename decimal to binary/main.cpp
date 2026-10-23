#include <iostream>
using namespace std;

int main() {
    int n;
    int binary_val = 0, power = 1;
    cout << "n: ";
    cin >> n;
    while (n > 0) {
        binary_val += (n % 2)*power;
        power *= 10;
        n /= 2;
    }
    cout << binary_val << "\n";
    return 0;
}
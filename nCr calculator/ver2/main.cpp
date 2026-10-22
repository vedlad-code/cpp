#include <iostream>
using namespace std;

int ncr(int n, int r) {
    int prod_Top = 1, prod_Btm = 1;
    for(int i = n; i > (n-r); i--) {
        prod_Top *= i;
    }
    for(int i = r; i > 1; i--) {
        prod_Btm *= i;
    }
    return prod_Top/prod_Btm;
}

int main() {
    int n, r;
    cout << "n: ";
    cin >> n;
    cout << "r: ";
    cin >> r;
    cout << "nCr = " << ncr(n,r) << "\n";
    return 0;
}
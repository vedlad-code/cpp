#include <iostream>
using namespace std;

int fact(int n) {
    int prd = 1;
    for (int i = 1; i <= n; i++) {
        prd *= i;
    }
    return prd;
}

int ncr(int n, int r) {
   float ncr = (fact(n)) / (fact(r) * fact(n-r));
   return ncr;
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
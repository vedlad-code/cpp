#include <iostream>
using namespace std;

int main(){
    float a, b;
    cout << "input A: ";
    cin >> a;
    cout << "input B: ";
    cin >> b;
    cout << "sum: " << (a+b) << "\n";
    cout << "difference: " << (a-b) << "\n";
    cout << "product: " << (a*b) << "\n";
    cout << "division: " << (a/b) << "\n";
    cout << "modulo: " << fmod(a,b) << "\n";
    return 0;
}
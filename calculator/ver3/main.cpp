#include <iostream>
using namespace std;

float add(float a , float b) {
    return a+b;
}
float sub(float a , float b) {
    return a-b;
}
float mul(float a , float b) {
    return a*b;
}
float div(float a , float b) {
    return a/b;
}
float mod(float a , float b) {
    return fmod(a,b);
}
int main() {
    float a, b;
    string op;
    cout << "enter no 1: ";
    cin >> a;
    cout << "enter no 2: ";
    cin >> b;
    cout << "enter no operator: ";
    cin >> op;
    
    if (op == "+") {
        cout << add(a,b) << "\n";
    }
    else if (op == "-") {
        cout << sub(a,b) << "\n";
    }
    else if (op == "*") {
        cout << mul(a,b) << "\n";
    }
    else if (op == "/") {
        cout << div(a,b) << "\n";
    }
    else if (op == "%") {
        cout << mod(a,b) << "\n";
    }
    return 0;
} 
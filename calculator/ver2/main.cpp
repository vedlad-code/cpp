#include <iostream>
using namespace std;

int main() {
    bool running = true;

    while (running) {
        float a, b;
        string op, quit;
        cout << "input a: ";
        cin >> a;
        cout << "input b: ";
        cin >> b;
        cout << "available operators: + - * / % **" << "\n";
        cout << "choose operator: ";
        cin >> op;

        if (op == "+") {
            cout << "sum: " << (a+b) << "\n";
        }
        else if (op == "-") {
            cout << "difference: " << (a-b) << "\n";
        }
        else if (op == "*") {
            cout << "product: " << (a*b) << "\n";
        }
        else if (op == "/") {
            cout << "division: " << (a/b) << "\n";
        }
        else if (op == "%") {
            cout << "modulo: " << fmod(a,b) << "\n";
        }
        else if (op == "**") {
            cout << "power: " << pow(a,b) << "\n";
        }
        else {
            cout << "wrong operator";
        }
        cout << "Do you wish to continue? (y/n): ";
        cin >> quit;
        if (quit == "n" || quit == "N") {
            cout << "Quitting program..." << "\n";
            running = false;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;
    vector <int> vec(size);
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }
    int target;
    cout << "Target: ";
    cin >> target;
    vector <int> ans;

    int ps;
    int i = 0, j = size-1;
    while (i < j) {
        ps = vec[i] + vec[j];
        if (ps > target) {
            j--;
        } else if (ps < target) {
            i++;
        } else {
            cout << vec[i] << " "<< vec[j] << "\n"; 
            break;
        }
    }
    }

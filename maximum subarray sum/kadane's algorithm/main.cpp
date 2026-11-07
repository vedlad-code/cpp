#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;
    cout << "Array: ";
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN, cs = 0;
    for (int i = 0; i < size; i++) {
        cs += arr[i];
        maxSum = max(cs, maxSum);
        if (cs < 0) {
            cs = 0;
        }
    }
    cout << "Maximum Subarray sum: " << maxSum << "\n";
    return 0; 
}
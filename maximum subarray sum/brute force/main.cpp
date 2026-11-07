#include <iostream>
using namespace std;


int maxSum(int arr[], int size) {
    int maximum = INT_MIN;
    for (int st = 0; st < size; st++) {
        int cs = 0;
        for (int end = st; end < size; end++) {
            cs += arr[end];
            maximum = max(cs, maximum);
        }
    }
    return maximum;
}

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;
    cout << "Array: ";
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Maximum Subarray sum: " << maxSum(arr, size) << "\n";
    return 0;
}
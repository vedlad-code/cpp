#include <iostream>
using namespace std;

void linearSearch(int arr[], int target, int size) {
    bool found = false;
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        }
    }
    if (found) {
        cout << "Found "<< target << " at index: " << index << "\n";
    } else {
        cout << target << " not found in array\n";
    }
}

int main() {
    int size;
    cout << "enter size: ";
    cin >> size;
    int arr[size];
    cout << "enter array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "enter target: ";
    cin >> target;

    linearSearch(arr, target, size);

    return 0;
}
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
    int majorityElement = 0;
    int frequency = 1;

    for (int i = 0; i < size; i++) {
        if (frequency == 0) {
            majorityElement = vec[i];
        }
        if (majorityElement == vec[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }
    cout << majorityElement << "\n";
    }

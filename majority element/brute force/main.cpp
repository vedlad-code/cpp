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
    for (int i : vec) {
        int frequency = 0;
        for (int j : vec) {
            if (i == j) {
                frequency++;
            }
            if (frequency > size/2) {
                majorityElement = i;
            }
        }
    }
    cout << majorityElement << "\n";
}
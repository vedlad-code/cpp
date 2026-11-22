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
    sort(vec.begin(), vec.end());
    int majorityElement = vec[0];
    int frequency = 1;

    if (size == 1) {
        cout << majorityElement << "\n";
    }

    for (int i = 1; i < size; i++) {
        if (vec[i] == vec[i-1]) {
            frequency++;
        } else {
            frequency = 1;
            majorityElement = vec[i];
        }
        if (frequency > size/2) {
            cout << majorityElement << "\n";
            break;
        }
    }
}

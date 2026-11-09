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

    for (int i = 0; i < size && ans.empty(); i++){
        for (int j = i+1; j < size; j++){
            if (vec[i] + vec[j] == target) {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
                break;
            }
        }
    }
    if (!ans.empty()){
        cout << ans[0] << " " << ans[1] << "\n";
    } else {
        cout << "No pair found\n";
    }
}

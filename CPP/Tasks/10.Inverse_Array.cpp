#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " elements separated by spaces:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Inverse of the array is:" << endl;
    for (int i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

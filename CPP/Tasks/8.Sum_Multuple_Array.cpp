#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void sumArrays(int arr1[], int arr2[], int size) {
    int result[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
    cout << "Resultant array after addition is:";
    for (int i = 0; i < size; ++i) {
        cout << " " << result[i];
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of arrays: ";
    cin >> size;
    
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    cout << "Enter elements of first array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr1[i];
    }
    cout << "Enter elements of second array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr2[i];
    }
    
    sumArrays(arr1, arr2, size);
    
    return 0;
}

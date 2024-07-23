#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void squaresOfNumbers(int arr[], int size, int result[]) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr[i] * arr[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr[MAX_SIZE], result[MAX_SIZE];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    squaresOfNumbers(arr, size, result);
    
    cout << "Squared array elements:";
    for (int i = 0; i < size; ++i) {
        cout << " " << result[i];
    }
    cout << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    printFibonacci(terms);
    return 0;
}

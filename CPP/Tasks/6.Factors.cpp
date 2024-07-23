#include <iostream>
using namespace std;

void printFactors(int number) {
    cout << "Factors of " << number << " are:";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << " " << i;
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printFactors(number);
    return 0;
}

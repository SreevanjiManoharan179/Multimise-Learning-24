#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = log10(number) + 1;
    int sum = 0;
    
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }
    
    return sum == originalNumber;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

void findVowels(char name[]) {
    cout << "Vowels in the name:";
    for (int i = 0; i < strlen(name); ++i) {
        char ch = tolower(name[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << " " << name[i];
        }
    }
    cout << endl;
}

int main() {
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 100);
    findVowels(name);
    return 0;
}

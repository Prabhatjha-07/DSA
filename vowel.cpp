#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    // Convert to lowercase for simplicity
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel." << endl;
    else if ((ch >= 'a' && ch <= 'z'))
        cout << ch << " is a consonant." << endl;
    else
        cout << "Invalid input. Please enter an alphabet." << endl;

    return 0;
}
#include <iostream>
using namespace std;

int CheckBit(int num) {
    int count = 0;
    while (num != 0) {
        if (num & 1) {
            count++;
        }
        num = num >> 1;  // Always shift, regardless of bit value
    }
    return count;
}

int main() {
    int n, m;
    cout << "Enter the first number: ";
    cin >> n;
    cout << "Enter the second number: ";
    cin >> m;

    int total = CheckBit(n) + CheckBit(m);
    cout << "The total number of set bits is: " << total << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "output" << sum;
    return 0;
}
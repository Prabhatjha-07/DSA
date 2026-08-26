#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start; // Index of the smallest element (pivot)
}

int main()
{
    int arr[9] = {6, 7, 8, 9, 11, 1, 2, 3, 4};
    int ans = pivot(arr, 9);
    cout << "Pivot index: " << ans << endl;
    cout << "Pivot value: " << arr[ans] << endl;
    return 0;
}

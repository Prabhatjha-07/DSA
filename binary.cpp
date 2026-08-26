#include <iostream>
using namespace std;
int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/ 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end-start)/ 2;
    }
    return -1;
}
int main()
{
    int arr[10];
    int size;
    cin >> size;
    cout << " enter the array element ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the key to search";
    cin >> key;
    int index = search(arr, size, key);
    cout << "element is at index " << index ;
    return 0;
}
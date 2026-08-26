#include <iostream>
using namespace std;
int LastOccurence(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans =-1;
    for (int i = 0; i < size; i++)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else
            {
                start = mid + 1;
            }   

        mid = start + (end - start) / 2;
    }
    return ans;
}
int FirstOccurence(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[mid] == k)
        {
            ans =  mid;
            end = mid - 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else
            {
                start = mid + 1;
            }

        mid = start + (end - start) / 2;
    }
    return ans;
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
    int code=  FirstOccurence(arr, size, key);
    cout << "first occurence at index "<< code << endl ;
    int casee = LastOccurence(arr, size, key);
    cout << " last occurence of element is at index"<< casee;
    return 0;

}
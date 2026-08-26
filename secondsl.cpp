#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n ){
    int Largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>Largest){
            secondLargest = Largest;
            Largest = arr[i];
        } 
        else if(arr[i]>secondLargest && arr[i]<Largest){
            secondLargest = arr[i];
        }
    
    }
    return secondLargest;
}
int secondSmallest(int arr[], int n){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for(int i = 0 ;i<n ; i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]>smallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sl = secondLargest(arr,n);
    int sm = secondSmallest(arr,n);
    cout<<"Second Largest: "<<sl<<endl; 
    cout<<"Second Smallest: "<<sm<<endl;
    return 0;

}
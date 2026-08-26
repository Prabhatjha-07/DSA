#include<iostream>
using namespace std;
int print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    return 0;
}
int swap(int arr[],int size){
    for (int i = 0; i<size ; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    return 0;
}
int main (){
    int even[10]={1,2,3,4,5,6,7,8,9,10};
    int odd[5]={1,3,5,7,9};
    swap(even,10);
    swap(odd,5);
    print (even,10);
    print (odd,5);


}
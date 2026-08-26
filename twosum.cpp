#include<iostream>
using namespace std;
int twosum(int arr[], int size, int target, int &index1, int &index2 ){
    for (int i=0;i<size;i++){
        for (int j=i+1; j< size; j++){
            if(arr[i]+arr[j]==target){
                index1= i;
                index2= j;
                return true;
            }
        }
    }
    return false;

}
int main (){
    int arr[100];
    int size;
    int target ;
    int i1,i2;
    cout << " enter the size of arrray";
    cin >> size;
    cout << " enter the array elements ";
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << " enter the target element ";
    cin >> target ;
    if (twosum(arr,size,target,i1,i2)){
        cout << i1 <<" "<< i2;
    }
    else {
        cout <<" no element found ";
    }
    return 0;
}
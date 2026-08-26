#include<iostream>
using namespace std;

int getmin(int arr[], int size){
    int min= INT_MAX;
    for (int i = 0; i<size;i++){
          if (arr[i]<min){
            min= arr[i];
          }
    }
    return min;
}
int getmax(int arr[], int size){
    int max= INT_MIN;
    
    for (int i = 0; i<size;i++){

         if (arr[i]>max){
            max= arr[i];
          }
    }
    return max;
}
int main(){
    int size ;
    cout<< " enter the size of array ";
    cin >> size;
    int arr[100];
    for (int i = 0; i<size;i++){
        cin >> arr[i];
    }
    cout << " maximum integer "<< getmax(arr,size);
    cout << " minimum integer "<< getmin (arr,size);
    return 0;


}
// finding max and min by predefined function 
//int getmax(int arr[], int size){
  //  int maxi= INT_MIN;
    
    //for (int i = 0; i<size;i++){
//
  //   maxi = max(maxi, arr[i]);
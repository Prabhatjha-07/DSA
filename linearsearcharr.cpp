#include<iostream>
using namespace std;
int search(int arr[], int size, int key ){
    for (int i=0;i<size;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return 0;

}
int main (){
    int key ;
    int arr[100];
    int size;
    cout << " enter the size";
    cin >> size;
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << " enter the element to search for ";
    cin >> key ;
    int found = search(arr,size,key);
    if (found ){
        cout << " key is present at  " << found ;

    }
    else {
        cout << " key is not present ";

    }
    return 0;

}
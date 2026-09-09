#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    vector<int> v = {1, 2, 3, 4, 5};

    node* head = new node(v[0]);
    node* current = head;

    for(int i = 1 ; i < v.size() ; i++){
        current -> next = new node(v[i]);
        current = current -> next;


    }

    current = head;

    while(current != nullptr){
        cout << current -> data << " ";
        current = current -> next;
    }
    return 0 ;
}


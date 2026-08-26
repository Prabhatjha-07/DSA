#include<iostream>
using namespace std;
int ap(int num ){
    int ari= (3 * num +7);
    return ari;

}
int main (){
    int n ;
    cout << " enter the number ";
    cin >> n;
    int ans = ap(n);
    cout << " the answer is "<< ans;

}
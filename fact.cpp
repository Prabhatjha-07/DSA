#include<iostream>
using namespace std;
int fact(int n){

    int fact=1 ;
    for (int i=1;i<=n;i++){
        fact= fact*i;
       
    }
    return fact;
}
    int nCr(int n , int r) {
        int num = fact(n);
        int den = fact(r) * fact (n-r);
        return num/den;
    }
    int main () {
        int n,r;
        cin >> n >> r ;
        cout << " answer is "<< nCr(n,r);
        return 0;

    }

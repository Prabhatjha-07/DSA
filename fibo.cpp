#include<iostream>
using namespace std;
int fibo(int n){
    int a= 0;
    int b=1;
    int next ;
    for (int i=2 ;i<=n;i++){
        next=a+b;
        a=b;
        b=next ;
    }
    return b;
}
int main (){
    int n ;
    cout <<  " enter the number ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibo(n) << endl;
    return 0;

}
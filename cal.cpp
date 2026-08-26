#include<iostream>
using namespace std;
int main (){
    int a,b;
    char op;
    int o;
    int result ;
    cout << " enter the first number ";
    cin >> a;
    cout << " enter the second number ";
    cin >> b;
    cout <<" choose an operation ";
    cin >> op;
    switch(op){
        case '+':
        o=a+b;
        cout << o;
        break;
        case '*':
        o= a*b;
        cout << o;
        break ;
        case '/':
        o=a/b;
        cout << o;
        break ;
        case '-':
        o=a-b;
        cout << o;
        break ;
        default :
        o=a%b;
        cout << o;

    }
    return 0;
}
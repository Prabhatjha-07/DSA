class Solution {
public:
 const int m = 1e9 + 7;

long long find(long long a , long long b ){
    if (b == 0){
        return 1 ;
    }

    long long half = find(a, b/2);
    long long prabhat = (half * half ) % m ;

    if( b % 2 == 1  ){
        prabhat = (prabhat * a )% m ;
    }
    return prabhat ;
}
    int countGoodNumbers(long long n) {
        return (long long ) find(5 , (n+1) / 2)  * find(4 , n / 2) % m;
        
        
    }
};
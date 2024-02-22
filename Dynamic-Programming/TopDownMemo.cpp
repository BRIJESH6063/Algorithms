// Dynamic Programming Introduction.. 

#include <iostream>
using namespace std;
const int N = 1e5+10 ;

int dp[N] ;
int fibo(int n)
{
    if(n == 1 or n == 0) return n ;
    if(dp[n] != -1) return dp[n] ;
    return dp[n] = fibo(n-1)+fibo(n-2) ;
    
}

int main() {
        for(int i=0; i<N; i++) dp[i] = -1 ;

	cout << n << endl ;
	cout << fibo(n) << endl ;
	
	
	return 0;
}


/*
memset dont work for random positive number to be filled.
generally suggested to fill by -1.
Time Complexity -- > T(n) = O(n) ..
*/

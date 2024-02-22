// Dynamic Programming Introduction.. 
// Bottom Up Approach 

#include <iostream>
using namespace std;
const int N = 1e5+10 ;

int dp[N] ;

int main() {
    for(int i=0; i<N; i++) dp[i] = -1 ;

	int n ; cin >> n ;
	dp[0] = 0 ; dp[1] = 1 ;
	for(int i=2; i<n; i++) dp[i] = dp[i-1]+dp[i-2] ;
	
	for(int i=0; i<n; i++) cout << dp[i] << " " ;
	cout << endl ;
	return 0;
}


/*
memset dont work for random positive number to be filled.
generally suggested to fill by -1.
Time Complexity -- > T(n) = O(n) ..
*/

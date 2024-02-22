/* Dynamic Programming Problems.. 
   Dynamic bottom2top recursion solution */
/* Length of longest increasing subsequence */
   
   
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10 ;
vector<int> a(N) ;
int dp[N] ;

int lis(int i)
{
    int ans = 1 ;
    if(dp[i] != -1) return dp[i] ;
    for(int j=0; j<i; j++){
        if(a[i] > a[j])
        ans = max(ans, lis(j)+1) ;
    }
    return dp[i] = ans ;
}

int main() {
    int n ; cin >> n  ;
    memset(dp, -1, sizeof(dp)) ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    int ans = 0 ;
    for(int i=0; i<n; i++) cout << lis(i) << " " ;
    cout << endl ;
    for(int i=0; i<n; i++) ans = max(ans, lis(i)) ;
    cout << ans << endl; 
    
    
	return 0;
}


/*
input --  
8
10 9 2 5 3 7 101 18
output -- 
1 1 1 2 2 3 4 4 
4

Time complexity - T(n) = O(n^2) .
*/

/* Dynamic Programming Problems.. 
   Dynamic top2bottom recursion solution */
/* N numbered stone each height hi frog initially at 1(say i) and may jump to i+1 or i+2
   cost = cost + abs(hi - hi+1)orabs(hi - hi+2).. find minimum cost to reach last stone.*/
   
   
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10 ;
int h[N] ;
int dp[N] ;

int funct(int n)
{
    
    if(n==0) return 0 ;
    if(dp[n] != -1) return dp[n] ;
    int cost = INT_MAX ;
    //way1
    cost = min(cost, funct(n-1)+abs(h[n]-h[n-1])) ;
    //way2
    if(n>1) cost = min(cost, funct(n-2)+abs(h[n]-h[n-2])) ;
    return dp[n] = cost ;
}

int main() {
    int n ; cin >> n ;
    memset(dp, -1, sizeof(dp)) ;
    for(int i=0; i<n; i++) cin >> h[i] ;
    
    cout << funct(n-1) << endl ;
    
	return 0;
}


/*
input --  
4
10 30 40 20
output -- 
30
*/

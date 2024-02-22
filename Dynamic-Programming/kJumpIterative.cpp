/* Dynamic Programming Problems.. 
   Dynamic bottom2top recursion solution */
/* N numbered stone each height hi frog initially at 1(say i) and may jump to i+1 to i+k
   k is given maximum jump made by frog 
   cost = cost + abs(hi - hi+1)orabs(hi - hi+2).. find minimum cost to reach last stone.*/
   
   
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10 ;
int h[N] ; int k ;
int dp[N] ;

int funct(int n)
{
    if(n==0) return 0 ;
    if(dp[n] != -1) return dp[n] ;
    int cost = INT_MAX ;
    for(int j=1; j<=k; j++){
        if(n-j >= 0){
            cost = min(cost, funct(n-j)+abs(h[n]-h[n-j])) ;
        }
    }
    return dp[n] = cost ;
}

int main() {
    int n ; cin >> n >> k ;
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

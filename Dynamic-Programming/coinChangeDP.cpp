// Coin change Problem Dynamic Programming.
// Minimum number of coins required from unlimited coins of given points

#include <bits/stdc++.h>
using namespace std;
int N = 2510 ;
int dp[10010] ;

int funct(int amount, vector<int>& coins){
    if(amount == 0) return 0 ;
    if(dp[amount] != -1) return dp[amount] ;
    int ans = INT_MAX ;
    for(int coin : coins){
        if(amount - coin >= 0)
        ans = min(ans + 0LL, funct(amount-coin, coins) + 1LL) ;
    }
    return dp[amount] = ans ;
}

int coinChange(vector<int>& coins, int amount)
{
    int ans = funct(amount, coins) ;
    return ans == INT_MAX ? -1 : ans ;
}
int main() {
    memset(dp, -1, sizeof(dp)) ;
    int n ; int amount ; cin >> n >> amount ;
    vector<int> coins(n, 0) ;
    for(int i=0; i<n; i++) cin >> coins[i] ;
	//vector<int> coins = {2} ;
	cout << coinChange(coins, amount) ;
	
	
	
	return 0;
}

/* input -- 
3 11
1 2 5
output --
3
*/

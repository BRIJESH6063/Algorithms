#include<bits/stdc++.h>
using namespace std ;

// int knapsack01(int n, int w, vector<int> v, vector<int> wts) {
//     if(n == 0 || w == 0) return 0 ;
//     if(wts[n-1] > w) return knapsack01(n-1, w, v, wts) ;
//     else {
//         int inc = v[n-1] + knapsack01(n-1, w-wts[n-1], v, wts) ;
//         int exc = knapsack01(n-1, w, v, wts) ;
//         return max(inc, exc) ;
//     }

// }

// Dynamic Implementation ..
int knapsack01(int n, int w, vector<int> v, vector<int> wts) {
    int dp[n+1][w+1] ;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=w; j++) {
            if(i == 0 || j == 0) dp[i][j] = 0 ;
            else if(wts[i-1] > j) dp[i][j] = dp[i-1][j] ;
            else {
                int inc = v[i-1]+ dp[i-1][j-1] ;
                int exc = dp[i-1][j] ;
                
                dp[i][j] = max(inc, exc) ;
            }
        }
    }
    
    return dp[n][w] ;
}

int main()
{
    vector<int> v  ;
    for(int i=0; i<4; i++) {
        int x ; cin >> x ; v.push_back(x) ;
    }
    vector<int> wts  ;
    for(int i=0; i<4; i++) {
        int x ; cin >> x ; wts.push_back(x) ;
    }
    cout << knapsack01(5, 68, v, wts) << endl ;

    return 0 ;
}

/* input :
12 14 16 18
22 24 46 58
*/
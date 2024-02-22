// minimum steps to one  divide by two, divide by three or subtract by one

#include<bits/stdc++.h>
using namespace std ;

// Brute Force Solution .. Recursion Method .. 
int minSteps(int n)
{
    if(n <= 1) return 0 ;
    
    int y = INT_MAX ; int z = INT_MAX ; int x = INT_MAX ;
    if(n%2 == 0) y = minSteps(n/2) ;
    else if(n%3 == 0) z = minSteps(n/3) ;
    else x = minSteps(n-1) ;
    int ans = min(x, y) ; ans = min(ans, z) + 1 ;

    return ans ;
}

// Dynamic Programming Solution .. Memorization Method ..
// top-Bottom approach...
int helper(int *arr, int n) {
    if(n <= 1) return 0 ;
    if(arr[n] != -1) return arr[n] ;

    int y = INT_MAX ; int z = INT_MAX ; int x = INT_MAX ;
    if(n%2 == 0) y = helper(arr, n/2) ;
    else if(n%3 == 0) z = helper(arr, n/3) ;
    else x = helper(arr, n-1) ;

    int ans = min(x, min(y, z)) + 1 ;

    arr[n] = ans ;
    return ans ;

}

int minSteps2(int n) {
    int arr[n+1] ;
    for(int i=0; i<n+1; i++) arr[i] = -1 ;
    return helper(arr, n) ;
}

// Dynamic Programming Solution .. Memorization Method ..
// Bottom-Up approach... iterative

int minSteps3(int n) {
    int arr[n+1] ; arr[0] = 0 ; arr[1] = 0 ;
    int ans = INT_MAX ;
    for(int i=2; i<=n; i++){
        int x = INT_MAX ; int y = INT_MAX ; int z = INT_MAX ;
        
        if(i%2 == 0) y = arr[i/2] ;
        else if(i%3 == 0) z = arr[i/3] ;
        else x = arr[i-1] ;
        
        arr[i] = min(x, min(y, z)) + 1 ;
    }

    return arr[n] ;

}

// Climb stairs problem 
int climbStairs(int n) {
    // int dp[n+1] ;
    // dp[0] = 1 ; dp[1] = 1 ;
    // for(int i=2; i<=n; i++){
    //     dp[i] = dp[i-1] + dp[i-2] ;
    // }
    // return dp[n] ;


    // let say climbers can climb max k stairs in one step 
    // here k = 2 ;
    int dp[n+1] ; int k = 2 ;
    dp[0] = 1 ; dp[1] = 1 ;
    for(int i=2; i<=n; i++){
        int ans = 0 ;
        for(int j = 1; j<=k; j++) ans += dp[i-j] ;
        dp[i] = ans ;
    }

    return dp[n] ;
}


int main()
{
    int n ; cin >> n ;
    cout << "Minimum steps Recursion : " << minSteps(n)  << endl ;
    cout << "Minimum steps Dynamic1  : " << minSteps2(n) << endl ;
    cout << "Minimum steps Dynamic2  : " << minSteps3(n) << endl ;

    return 0 ;
}
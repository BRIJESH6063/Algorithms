#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n ; cin >> n ; int m ; cin >> m ;
    int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    
    int index = -1 ;
    int s = 0 ; int e = n-1 ;
    while(s <= e){
        int mid = (s+e)/2 ;
        if(m == a[mid]) index =  mid ;
        else if(m > a[mid]) s = mid + 1 ;
        else if(m < a[mid]) e = mid - 1;
    }
    
    cout << index << endl ;

}
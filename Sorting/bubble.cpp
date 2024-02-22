#include<bits/stdc++.h>
using namespace std ;


void BubbleSort(int a[], int n){
    for(int i=1; i<n; i++){
        int b = n-2 ; int flag = 0 ;
        for(int j=0; j<=b; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]) ; 
                flag = 1 ;
            }
        }
        b-- ;
        if(flag == 0) break ;
    }
}

int main()
{
    int n ; cin >> n ;
    int a[n] = {0} ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    // BubbleSort(a, n) ;
    
    // Inbuilt sort function 
    sort(a, a+n) ;
    for(int i=0; i<n; i++) cout << a[i] << " " ;
    cout << endl ;


    
    return 0 ;
}
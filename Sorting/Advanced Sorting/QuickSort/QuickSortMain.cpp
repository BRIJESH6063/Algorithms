#include<bits/stdc++.h>
#include"QuickSort.h"
using namespace std ;

int main()
{
    int n ; cin >> n ; int a[n] = {0}  ;
    for(int i=0; i<n; i++) cin >> a[i] ;
    // for(int i=0; i<n; i++) cout << a[i] << "  " ;
    QuickSort(a, 0, n-1) ;

    for(int i=0; i<n; i++) cout << a[i] << "  " ;
    cout << endl ;
    // cout << "Hello" << endl ;

    return 0 ;

}
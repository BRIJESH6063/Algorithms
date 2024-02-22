#include<bits/stdc++.h>
#include"MergeSort.h"
using namespace std ;

int main()
{
    int n ; cin >> n ; int a[n] = {0}  ;
    for(int i=0; i<n; i++) cin >> a[i] ;

    MergeSort(a, 0, n-1) ;
    for(int i=0; i<n; i++) cout << a[i] << "  " ;
    cout << endl ;

}
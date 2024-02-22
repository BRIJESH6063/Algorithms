#include<bits/stdc++.h>
using namespace std ;

void MergeArray(int x[], int y[], int a[], int start, int end)
{
    int mid = (start + end)/2 ;
    int i = start ; int j = mid+1 ; int k = start ;
    while(i <= mid && j <= end){
        if(x[i] < y[j]){
            a[k] = x[i] ; i++ ; 
        }
        else {
            a[k] = y[j] ; j++ ; 
        }
        k ++ ;
    }

    while(i <= mid) {
        a[k] = x[i] ; 
        i ++ ; k ++ ;
    }
    while(j <= end) {
        a[k] = y[j] ; 
        j ++ ; k ++ ;
    }

}

void MergeSort(int a[], int start, int end)
{
    if(start >= end) return ;
    int mid = (start+end)/2 ;
    int x[100] = {0} ; int y[100] = {0} ;
    for(int i=start; i<=mid; i++) x[i] = a[i] ;
    for(int i=mid+1; i<=end; i++) y[i] = a[i] ;
    MergeSort(x, start, mid) ;
    MergeSort(y, mid+1, end) ;
    MergeArray(x, y, a, start, end) ;

}


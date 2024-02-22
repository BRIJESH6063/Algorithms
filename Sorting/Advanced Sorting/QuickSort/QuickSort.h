#include<bits/stdc++.h>
using namespace std ;


int partition(int a[], int start, int end)
{
    int i = start ; 
    int pivot = a[end] ;
    for(int j = start; j<=end-1; j++){
        if(a[j] < pivot){
            swap(a[i], a[j]) ; i++ ;
        }
    }
    swap(a[i], a[end]) ;
    return i ;
}

void QuickSort(int a[], int start, int end)
{
    if(start > end) return ;
    int p = partition(a, start, end) ;
    QuickSort(a, start, p-1) ;
    QuickSort(a, p+1, end) ;

}
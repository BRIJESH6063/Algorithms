#include<bits/stdc++.h>
using namespace std ;

void inplaceHeapSort(int *pq, int n)
{
    // build heap in the array... 
    for(int i=1; i<n; i++){
        int ci = i ; 
        while(ci > 0) { 
            int pi = (ci-1)/2 ;
            if(pq[ci] < pq[pi]){
                swap(pq[ci], pq[pi]) ;
                ci = pi ;
            }
            else break ;
        }
    }
    
    for(int i=0; i<n; i++) cout << pq[i] << "  " ;
    cout << endl ;

    int size = n ;
    while(size >= 1){
        swap(pq[0], pq[size-1]) ;
        size  -- ;
        // min Heapify continued.. 
        int pi = 0 ;
        while(true){
            int lci = 2*pi + 1 ;
            int rci = 2*pi + 2 ;
            int mini = pi ;
            if(lci < size && pq[lci] < pq[mini]) 
            mini = lci ;
            if(rci < size && pq[rci] < pq[mini]) 
            mini = rci ;
            if(mini == pi) break ;

            swap(pq[pi], pq[mini]) ;
            pi = mini ;
                        
        }
    }
    
}

int main()
{
    int n ; cin >> n ; int arr[n] = {0} ;
    for(int i=0; i<n; i++) cin >> arr[i] ;

    inplaceHeapSort(arr, n) ;
    cout << "Heap Sort Applied : " ;
    for(int i=0; i<n; i++) cout << arr[i] << "  " ;
    cout << endl ;

    return 0 ;
}


/* input :
   8
   7 9 5 3 6 4 1 8
*/
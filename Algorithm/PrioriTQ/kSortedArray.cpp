/*
   Given an array of n elements, where each element is at most k 
   away from its target position, devise an algorithm that sorts 
   in O(n log k) time. For example, let us consider k is 2, an 
   element at index 7 in the sorted array, can be at indexes 5, 
   6, 7, 8, 9 in the given array.
*/

#include<bits/stdc++.h>
using namespace std ;

void kSortedArray(int *input, int n, int k){
    priority_queue<int> pq ;
    for(int i=0; i<k; i++) pq.push(input[i]) ;

    int s = 0 ;
    for(int i=k; i<n; i++){
        input[s] = pq.top() ;
        pq.pop() ; s++ ;
        pq.push(input[i]) ;
    }

    while(!pq.empty()) {
        input[s] = pq.top() ;
        pq.pop() ; s++ ;
    }

}

int main()
{
    int n ; cin >> n ; int k ; cin >> k ;  int arr[n] ;
    for(int i=0; i<n; i++) cin >> arr[i] ;

    kSortedArray(arr, n, k) ;

    for(int i=0; i<n; i++) cout << arr[i] << "  " ;
    cout << endl ;
    return 0 ; 
}

/* input 
6 3
10 12 0 6 7 9 
Time complexity : o(k.log(k)) + o((n-k).log(k))
                  o(n.log(k))
Space Complexity : o(k) or o(1)
   */
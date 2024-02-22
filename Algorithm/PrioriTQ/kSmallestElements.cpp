#include<bits/stdc++.h>
using namespace std ;

void kSmallest(int *input, int n, int k){
    // priority_queue<int> pq ;  // max heap
    priority_queue<int , vector<int>, greater<int>> pq ; // min heap syntax..
    
    for(int i=0; i<n ; i++) pq.push(input[i]) ;
    
    cout << "k smallest element : " ;
    for(int i=0; i<k; i++){
        cout << pq.top() << " " ;
        pq.pop() ;
    }

}

void kSmallest2(int *input, int n, int k){
    priority_queue<int> pq ;  // max heap
    // priority_queue<int , vector<int>, greater<int>> pq ; // min heap syntax..
    
    for(int i=0; i<k ; i++) pq.push(input[i]) ;

    for(int i=k; i<n; i++){
        if(input[i] < pq.top()) {
            pq.pop() ;
            pq.push(input[i]) ;
        }
    }

    cout << "k smallest element : " ;
    while(! pq.empty()){
        cout << pq.top() << " " ;
        pq.pop() ;
    }
    cout << endl ;
}

int main()
{
    int n ; int k ; cin >> n >> k ; int arr[n] = {0} ;
    for(int i=0; i<n; i++) cin >> arr[i] ;

    kSmallest(arr, n, k) ;


    return 0 ;
}

/* input 
6 3
10 12 0 6 7 9 
   Time complexity : o(n.log(k))
   */
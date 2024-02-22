#include<bits/stdc++.h>
using namespace std ;

void printPQ(priority_queue<int> pq){
    while(! pq.empty()){
        cout << pq.top() << "  " ;
        pq.pop() ;
    }
}

int main()
{
    priority_queue<int> pq ;  /// Max Heap 
    int data ; cin >> data ;
    while(data != -1){
        pq.push(data) ;
        cin >> data ;
    }

    cout << "Top : " << pq.top() << endl ;
    cout << "Priority_Queue : " ; printPQ(pq) ;

    return 0 ;

}

/* input : 
   36 78 456 98 41 89 357 -1
   output... 

*/
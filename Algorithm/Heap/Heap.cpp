#include<bits/stdc++.h>
using namespace std ;

// Implementing minimum priority queue.
class PQueue {
    vector<int> pq ;
    public :
           PQueue(){

           }
           bool Empty(){
            return pq.size()==0 ;
           }
           int getSize(){ return pq.size() ; }
           int getMin(){
                if(Empty()) return -1 ;
                else return pq[0] ;
           }
           void insert(int data){
                pq.push_back(data) ; 
                int cdata = pq.size()-1 ; 
                while(cdata > 0) { 
                    int pdata = (cdata-1)/2 ;
                    if(pq[cdata] < pq[pdata]){
                        swap(pq[cdata], pq[pdata]) ;
                        cdata = pdata ;
                    }
                    else break ;
                }
           }
           int removeMin(){
                if(Empty()) return 0 ;
                int ans = pq[0] ;
                swap(pq[0], pq[pq.size()-1]) ;
                pq.pop_back() ;

                // min Heapify continued.. 
                int pi = 0 ;
                while(true){
                    int lci = 2*pi + 1 ;
                    int rci = 2*pi + 2 ;
                    int mini = pi ;
                    if(lci < pq.size() && pq[lci] < pq[mini]) 
                    mini = lci ;
                    if(rci < pq.size() && pq[rci] < pq[mini]) 
                    mini = rci ;
                    if(mini == pi) break ;

                    swap(pq[pi], pq[mini]) ;
                    pi = mini ;
                    
                }
                
                return ans ;
           }

           void print(){
                for(auto x : pq) cout << x << "  " ;
                cout << endl ;
           }

} ;
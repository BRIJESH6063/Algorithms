#include<bits/stdc++.h>
#include"Heap.h"
using namespace std ;

int main()
{
    PQueue P ; 
    TakeInput(P) ;
    Print(P) ;
    cout << removeMini(P) << " removed!.." << endl ;
    Print(P) ;

    return 0 ;
}


/* input 
   7 6 9 4 2 3 -1
   
   */
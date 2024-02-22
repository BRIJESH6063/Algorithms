#include<bits/stdc++.h>
#include"Heap.cpp"
using namespace std ;

void TakeInput(PQueue &P){
    int data ; cin >> data ;
    while(data != -1){
        P.insert(data) ;
        cin >> data ;
    }
}

void Print(PQueue P){
    P.print() ;
}

int removeMini(PQueue &P){
    return P.removeMin() ;
}
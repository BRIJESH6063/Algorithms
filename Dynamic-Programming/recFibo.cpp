// Dynamic Programming Introduction.. 
// Why we need Dynamic Programming...

#include <iostream>
using namespace std;
const int N = 1e5+10 ;

int fibo(int n)
{
    if(n == 1 or n == 0) return n ;
    return fibo(n-1)+fibo(n-2) ;
    
}

int main() {
	int n ; cin >> n ;
	
	cout << fibo(n) << endl ;
	
	
	return 0;
}


/*
Recursion method Time Complexity -- T(n) = 2^n (Exponential).. 
*/

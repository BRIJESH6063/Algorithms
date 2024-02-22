// Fractional Knapsack Problem .
#include <bits/stdc++.h>
using namespace std;

bool sortbyRatio(const vector<double> &a, const vector<double> &b) {
    return (a[2] > b[2]);
}

void Solution(vector<vector<double>> vect, double given_cap)
{
    sort(vect.begin(), vect.end(), sortbyRatio);
    double res = 0 ; int curr_cap = given_cap ;
    
    for(auto x : vect) cout << x[0] << " " << x[1] << " " << x[2] << endl ;
    for(auto x : vect){
        if(x[0] <= curr_cap){
            res += x[1] ; curr_cap = curr_cap - x[0] ;
        }
        else res += x[1]*(curr_cap/(x[0]*1.0)) ;
        
        cout << "res = " << res << endl ;
    }
    
    cout << "The Fractional Knapsack Problem's Solution is : " << res << endl ;
    
}
int main() {
	int n ; cin >> n ; double m ; cin >> m ;
	vector<vector<double>> p(n) ;
	for(int i=0; i<n; i++) {
	    double x ; double y ; cin >> x >> y ; 
	    p[i].push_back(x) ; p[i].push_back(y) ; p[i].push_back(y/(x*1.0)) ;
	}
	
	Solution(p, m) ;
	return 0;
}



/*
  input -- 
  3 70
  50 600
  20 500
  30 400

  output -- 
  20 500 25
  30 400 13.3333
  50 600 12
  res = 500
  res = 900
  res = 1140
  The Fractional Knapsack Problem's Solution is : 1140

*/
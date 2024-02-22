// Job Sequencing Problem .
#include <bits/stdc++.h>
using namespace std;

bool sortbyProfit(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second > b.second);
}

void Solution(vector<pair<int, int>> vect)
{
    sort(vect.begin(), vect.end(), sortbyProfit);
    int maxi = INT_MIN ; int netProfit = 0 ;
    cout << "The sorted version (decreasing order) of job by their profit : " << endl ;
    for(auto x : vect) cout << x.first << " " << x.second << endl ;
    for(auto x : vect) {
        if(x.first > maxi) maxi = x.first ;
    }
    int arr[maxi] = {0} ;
    for(auto x : vect){
        if(arr[x.first-1] == 0) arr[x.first-1] = x.second ;
        else {
            for(int i = x.first-1; i >= 0; i--){
                if(arr[i] == 0){
                    arr[i] = x.second ;
                }
            }
        }
    }
    cout << "The profit of jobs selected are as follows : " ;
    for(int i = 0; i < maxi; i++){
        cout << arr[i] << " " ; netProfit += arr[i] ;
    }
    cout << endl ;
    cout << "The Job Sequencing Problem's Net profit made by job sequence is : " << netProfit << endl ;
    
}
int main() {
	int n ; cin >> n ; 
	vector<pair<int, int>> p ;
	for(int i=0; i<n; i++) {
	    int x ; int y ; cin >> x >> y ; p.push_back(make_pair(x,y)) ;
	}
	
	
	Solution(p) ;
	return 0;
}


/*

input -- 
5
2 100
1 50
2 10
1 20
3 30

output --
The sorted version (decreasing order) of job by their profit : 
2 100
1 50
3 30
1 20
2 10
The profit of jobs selected are as follows : 50 100 30 
The Job Sequencing Problem's Net profit made by job sequence is : 180

*/
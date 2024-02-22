#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}

void Solution(vector<pair<int, int>> vect)
{
    sort(vect.begin(), vect.end(), sortbysec);
    vector< pair<int, int> > ans ;
    ans.push_back({vect[0].first, vect[0].second}) ;
    pair<int, int> last = make_pair(ans[0].first, ans[0].second) ;
    for(auto x : vect){
        if(x.first < last.first && x.second > last.second){
            ans.push_back(make_pair(x.first, x.second)) ;
            last.first = x.first ; last.second = x.second ;
        }
    }
    
    cout << "The Activity Selection Problem's Solution for given pair vector is : " << ans.size() << endl ;
    for(auto x : ans) cout << x.first << " " << x.second << endl ;
}
int main() {
	int n ; cin >> n ;
	vector<pair<int, int>> p(n) ;
	for(int i=0; i<n; i++) cin >> p[i].first >> p[i].second ;
	
	Solution(p) ;
	return 0;
}

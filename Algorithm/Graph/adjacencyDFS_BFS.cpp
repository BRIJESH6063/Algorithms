#include<bits/stdc++.h>
using namespace std ;

// DFS traversal (depth first search) .. connected graph implementation
void printDFS(vector<vector<int>> v, int sv, vector<bool> &visited) {
    cout << sv << "  " ;
    int n = v.size() ;
    visited[sv] = true ;
    for(int i=0; i<n; i++){
        if(v[sv][i] && visited[i] == false) 
        printDFS(v,i, visited) ;
    }
}
void DFS(vector<vector<int>> matrix) {
    int n = matrix.size() ;
    vector<bool> visited(n, false) ;
    int count = 0 ;
    for(int i=0; i<n; i++) {
        if(! visited[i]) {
            count ++ ;
            printDFS(matrix, i, visited) ;
        }
    }
    cout << endl ;
    cout << "No of connected componenets DFS : " << count << endl ;
}


// BFS traversal (breadth first search) .. connected graph implementation
void printBFS(vector<vector<int>> v, int sv, vector<bool> &visited) {
    int n = v.size() ;
    queue<int> q ;
    q.push(sv) ; visited[sv] = true ;
    while(!q.empty()) {
        int cv = q.front() ; q.pop() ;
        cout << cv << "  " ;
        for(int i=0; i<n; i++) {
            if(v[cv][i] && visited[i] == false) {
                q.push(i) ; visited[i] = true ;
            }
        }
    }
    // cout << endl ;  
}
void BFS(vector<vector<int>> matrix) {
    int n = matrix.size() ;
    vector<bool> visited(n, false) ;
    int count = 0 ;
    for(int i=0; i<n; i++) {
        if(! visited[i]) {
            count ++ ;
            printBFS(matrix, i, visited) ;
        }
    }
    cout << endl ;
    cout << "No of connected componenets BFS : " << count << endl ;
}


// Adjacency Matrix .. 
int main() 
{
    int n ; cin >> n ; int e ; cin >> e ;
    vector<vector<int>> matrix(n, vector<int>(n,0)) ;

    for(int i=0; i<e; i++){
        int fv ; int sv ; cin >> fv >> sv ;
        matrix[fv][sv] = 1 ;
        matrix[sv][fv] = 1 ;
    }
    vector<bool> visited(n, false) ;
    cout << "DFS Traversal : " ;
    DFS(matrix) ; 
    cout << "BFS Traversal : " ;
    BFS(matrix) ;
    return 0 ;
}

/* input -- 
0<----->2<------->1<-------->3


7 7
0 1
0 2
1 5
2 3
5 4
3 4
2 6
      0
    /   \
   1     2
   |     |\
   5     3 \
    \   /   6
      4

10 10
0 1
0 2
1 3
1 4
2 6
3 5
4 5
6 5
7 8
8 9

      0
    /   \
   1     2
  / \     \
 3   4     6 
  \ /     /
   5-----/

   7<---->8<------>9
*/
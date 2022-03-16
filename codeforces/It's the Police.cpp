
#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
 
int main()
{
int n,m,j,k,c,ind; cin>>n>>m;
 
vector <int> visited(n,1);
vector<vector<int>> edges(n+9);
 
int mini = 100000+9;
for(int i=0; i<m;i++){
    cin>>j>>k;
    edges[j].push_back(k);
    edges[k].push_back(j);
}
 
for(int node=1; node<=n; node++){
        c = edges[node].size();
        if(mini > c){
            mini = c;
            ind  = node;
        }
}
visited[ind-1] = 0;
for(auto k: edges[ind]){visited[k-1] = 0;}
for(auto l:visited){cout<<l<<" ";}
}

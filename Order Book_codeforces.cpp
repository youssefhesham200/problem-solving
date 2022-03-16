#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
int32_t main() {
    IO
 
   int n,c,p,q; cin>>n>>c;  map<int,int> s,ss,b;
   char m;
 
   for(int i=0; i<n; i++){
    cin>>m>>p>>q;
 
    if(m == 'S'){
        s[p] += q;
    }
 
    else{
        b[p] += q;
    }
}
 
 int i =0;
 for(auto itr = s.begin(); itr != s.end(); ++itr){
    if(i<c){
        ss[itr->first] = itr->second;
        i++;
    }
    else{break;}
 }
 
 for(auto itr = ss.rbegin(); itr != ss.rend(); ++itr){
    cout<<"S "<<itr->first<<" "<<itr->second<<"\n";
 }
 
 
 
 i =0;
 for(auto itr = b.rbegin(); itr != b.rend(); ++itr){
    if(i<c){
        cout<<"B "<<itr->first<<" "<<itr->second<<"\n";
        i++;
    }
    else{break;}
 }
 
 
 
}

#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
int32_t main() {
    IO
 
    int n ; string c; set<string> s; stack<string> st;
    cin>>n;
 
    for(int i=0; i<n; i++){
        cin>>c;
        st.push(c);
    }
 
    while(!st.empty()){
    if (s.find(st.top()) == s.end()){
                cout<<st.top()<<"\n";
       }
       s.insert(st.top());
       st.pop();
    }
 
}

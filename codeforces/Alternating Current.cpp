#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
int32_t main()
{ IOS
    string n; cin>>n; bool ok=true;
    stack<char> stk;
    if(n.length()&1)
        cout<<"No\n";
    else {
        for(int i=0; i<n.length(); i++){
            if(stk.empty()){stk.push(n[i]); continue;}
            if(n[i] != stk.top()){stk.push(n[i]);}
            else{stk.pop();}
        }
 
        if(stk.empty()){cout<<"Yes\n";}
        else{cout<<"No\n";}
}
}

#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
int32_t main()
{ IOS
    int n; cin>>n;
    while(n--){
        int t ,all; cin>>t;
 
        all = (int(sqrt(t)) + int(cbrt(t))) - int(sqrt(cbrt(t)));
        cout<<all<<"\n";
    }
 
 
}
 

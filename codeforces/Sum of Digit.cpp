 
#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
int32_t main() {
    IO
    string s; int c = 0, limit = 12,di;
    cin>>s;
 
    if(s.size() < 2){cout<<0; exit(0);}
 
    else{
        while (limit >= 10){
            limit = 0;
            for(int i= 0; i<s.size(); i++){
                di = (int(s[i]) - '0');
                limit+=di;
            }
             c++;
            s = to_string(limit);
        }
    }
 
    cout<<c;
}

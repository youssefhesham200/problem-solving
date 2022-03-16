#include<iostream>
#include<algorithm>
#include <cmath>
 
using namespace std;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n; cin>>n;
    while(n--){
       int f,w; cin>>f>>w;
       if(f>=w){
        cout<<"FunkyMonkeys"<<endl;
       }
       else{
        cout<<"WeWillEatYou"<<endl;
       }
    }
}

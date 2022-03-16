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
        int l,flag = 0; cin>>l; int ar[l];
        for(int i=0 ; i<l; i++){
            cin>>ar[i];
        }
        for(int i=1; i<l; i++){
            if((ar[i]-ar[i-1]) % 2 != 0){
                cout<<"no"<<endl;
                flag =1;
                break;
            }
        }
        if(flag ==0){cout<<"yes"<<endl;}
    }
}

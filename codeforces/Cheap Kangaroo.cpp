#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;
int gcd(long long a,long long b){
if(b==0){return a;}
return gcd(b,a%b);
}
 
int arrgcd(long long  arr[],int n){
    int all = arr[0];
    for(int i=1; i<n; i++){
        all = gcd(arr[i],all);
    }
    if(all ==1){return 1;}
    return all;
}
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
    int n; cin>>n;
    while(n--){
      long long l,sum=0; cin>>l;
      long long val[l];
    for(int i=0; i<l; i++){
        cin>>val[i];
        sum+=val[i];
    }
 
    cout<<sum<<" "<<arrgcd(val,l)<<endl;
}
}

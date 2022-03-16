#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int arr[5009], dp[5009][5009];
 
int maxsub(int l,int r, int n){
    if(l == n){
        return 0;
    }
    if(dp[l][r] != -1){
    return dp[l][r];
    }
    int ans,ans1;
    if(arr[r] < arr[l]){
        ans1 = 1 + maxsub(l+1,r,n);
        ans = arr[l] - arr[r] + maxsub(l+1,l,n);
        dp[l][r] = min(ans, ans1);
    }
    else{
        dp[l][r] = maxsub(l+1,l,n);
    }
   return dp[l][r];
}
 
int main()
{
    int n, maxsum;
    cin>>n;
    for(int i=0; i<n;i++) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    maxsum = maxsub(0, n,n);
    cout<<maxsum;
    return 0;
}

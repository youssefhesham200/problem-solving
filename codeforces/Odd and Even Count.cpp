#include <iostream>
#include<functional>
#include<vector>
#include<math.h>
using namespace std;
 
int main()
{
int n,k; cin>>n;
for (int i=0; i<n; i++){
    cin>>k;
    int x = k/2;
    if (k%2==0){
        cout<<x<<" "<< x;
    }
    else{
        cout<<(k+1)/2<<" "<<x;
    }
cout<<endl;
}
}

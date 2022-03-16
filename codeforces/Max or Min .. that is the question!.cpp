#include<iostream>
#include<algorithm>
using namespace std;
 
 
int main()
{
   int n; cin>>n;
   while(n--){
    int ar[5];
    for(int i=0; i<5; i++){
        cin>>ar[i];
    }
    sort(ar,ar+5);
    cout<<ar[4] * ar[3]<<endl;
   }
}

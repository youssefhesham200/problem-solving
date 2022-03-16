#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
 
bool ispr(int n){
if(n == 2){return true;}
if(n%2 == 0){return false;}
if(n<=1){return false;}
else{
    for(int i=3; i*i <= n; i++){
        if(n%i==0){return false;
        break;}
    }
}
return true;
}
int main()
{
   int x; cin>>x;
   int c,i;
   i = x-2;
   if(ispr(i)){cout<<i<<" "<<2;}
   else{cout<<-1;}
}

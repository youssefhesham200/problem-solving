#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
 
 
 
int main()
{
    int x;
    int n,c=0; cin>>x>>n;
   while(x>=1){
    x/=n;
    if(x >= 1){
    c++;}
   }
   cout<<c+1;
}

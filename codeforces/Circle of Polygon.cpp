#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;
 
#define pi 3.14159265
 
 
int main()
{
    double v,l,b,k; cin>>v>>l;
    b =(180 - (360 / v)) / 2 ;
    k = (l/2) / (cos(b * pi / 180));
    cout<< setprecision(10)<< k * k * pi;
}

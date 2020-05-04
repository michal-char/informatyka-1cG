#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,l,x,pa,pb,h;
    pa=10;
    pb=20;
    cin>>a>>b>>l;
    h=(((a*pa)+(b*pb))/l);
    h=h*10;
    floor(h);
    cout<<h;
}

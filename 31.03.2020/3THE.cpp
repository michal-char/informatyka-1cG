#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
  double x=(double) (a+b+c)/2;
   printf("%.2f", sqrt(x*(x-a)*(x-b)*(x-c)))
}

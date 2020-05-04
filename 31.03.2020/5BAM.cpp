#include <iostream>
using namespace std;
int main()
{
    double h,d,x;
    cin>>h>>d;
    x=(h*h-d*d)/(2*h);
    printf("%.2f", x);
}

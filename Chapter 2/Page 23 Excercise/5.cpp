#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double x=sqrt(n);

    int a, b;

    a=floor(x);
    b=ceil(x);

    if((x-a)<(b-x))
    {
        cout<<a<<"\n";
    }
    else if((x-a)>(b-x))
    {
        cout<<b<<"\n";
    }
    else
    {
        cout<<a<<"\n";
    }

    return 0;
}

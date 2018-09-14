#include<iostream>
#include<cmath>
#define PI 3.1415926
using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;

    double A, B, C;

    A=acos((b*b+c*c-a*a)/(2*b*c))*(180/PI);
    B=acos((c*c+a*a-b*b)/(2*c*a))*(180/PI);
    C=180-(A+B);

    cout<<"A= "<<A<<" "<<"B= "<<B<<" "<<"C= "<<C<<endl;

    return 0;
}

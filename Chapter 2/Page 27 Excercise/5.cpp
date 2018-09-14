#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    if(a>0 && b>0)
        cout<<"1st"<<endl;
    else if(a<0 && b<0)
        cout<<"3rd"<<endl;
    else if(a<0 && b>0)
        cout<<"2nd"<<endl;
    else
        cout<<"4th"<<endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin>>n;

    if(n<2)
    {
        cout<< "Not Prime"<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<< "Prime"<<endl;
        return 0;
    }
    else if(n%2==0)
    {
        cout<< "Not Prime"<<endl;
        return 0;
    }

    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
        {
            cout<< "Not Prime"<<endl;
            return 0;
        }
    }
    cout<< "Prime"<<endl;

    return 0;
}

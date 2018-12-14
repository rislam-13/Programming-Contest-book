#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, w=1, p, x;
    cin>>n;

    x=n;

    for(i=n; i>=1; i--, n--)
    {
        for(p=n-1; p>0; p--)
            cout<< ".";

        for(j=1; j<=w; j++)
            cout<< "*";

        for(p=n-1; p>0; p--)
            cout<< ".";

        w+=2;

        cout<<endl;
    }

    w=2;
    x--;

    for(i=x; i>=1; i--, x--)
    {
        for(p=1; p<w; p++)
        {
            cout<< ".";
        }
        for(j=2*x+1-2; j>=1; j--)
        {
            cout<< "*";
        }
        for(p=1; p<w; p++)
        {
            cout<< ".";
        }

        w++;

        cout<<endl;
    }

    return 0;
}

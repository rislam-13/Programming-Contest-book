#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, w=1, p;
    cin>>n;

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

    return 0;
}

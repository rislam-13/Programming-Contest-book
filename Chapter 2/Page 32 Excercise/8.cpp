#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, w, p;
    cin>>n;

    w=n;

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=i; j++)
            cout<< "*";

        for(p=w-1; p>0; p--)
            cout<< ".";

        w--;

        cout<<endl;
    }

    return 0;
}

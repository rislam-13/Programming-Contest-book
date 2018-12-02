#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, w, p;
    cin>>n;

    for(i=n, w=1; i>=1; i--, w++)
    {
        for(p=1; p<w; p++)
            cout<< ".";

        for(j=i; j>=1; j--)
            cout<< "*";

        cout<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, w=1, p, y;
    cin>>n;

    for(i=n; i>=1; i--, n--)
    {
        y=1;

        for(p=1; p<w; p++)
            cout<< ".";

        for(j=2*n+1-2; ; )
        {
            if(y<=n)
            {
                cout<< y;
                y++;
            }
            else
            {
                for(y=y-2; y>=1; y--)
                    cout<< y;

                break;
            }
        }

        for(p=1; p<w; p++)
            cout<< ".";

        w++;

        cout<<endl;
    }

    return 0;
}

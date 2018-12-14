#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, w=1, p, y, r=1, x;
    cin>>n;

    for(i=n; i>=1; i--,n--)
    {
        y=1;

        for(p=n-1; p>=1; p--)
            cout<< ".";

        for(j=1; j<=w; j++)
        {
            if(y<=r)
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

        for(p=n-1; p>=1; p--)
            cout<< ".";

        w+=2, r++;

        cout<<endl;

    }

    x--, w=2;

    for(i=x; i>=1; i--, x--)
    {
        y=1;

        for(p=1; p<w; p++)
            cout<< ".";

        for(j=2*x+1-2; j>=1; j--)
        {
            if(y<=x)
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

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum;
    cin>>n;

    sum=n;

    if(n==0 || n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    else
    {
        n--;

        for(; n>=2; n-=2)
            sum*=n*(n-1);

        cout<<sum<<endl;
    }

    return 0;
}

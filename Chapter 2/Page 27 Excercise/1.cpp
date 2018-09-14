#include<iostream>
using namespace std;

int main()
{
    int nth, n, p, rev, dig, cnt=0;
    cin>>nth;

    n=1;

    while(1)
    {
        p=n;
        rev=0;

        while(p>0)
        {
            dig=p%10;
            rev=rev*10+dig;
            p=p/10;
        }

        if(rev==n)
        {
            cnt=cnt+1;
            if(cnt==nth)
            {
                cout<<n<<endl;
                break;
            }
        }

        n++;
    }

    return 0;
}

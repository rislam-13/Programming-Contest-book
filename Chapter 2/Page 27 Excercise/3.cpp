#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ara[3];
    cin>>ara[0]>>ara[1]>>ara[2];

    int n=sizeof(ara)/sizeof(ara[0]);

    sort(ara, ara+n, greater<int>());

    cout<<ara[0]<<" "<<ara[1]<<" "<<ara[2]<<endl;

    return 0;
}

// note: This ques is not same as ques 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, sum;
    cin>>n;

    sum=(n*(pow(n, 3)+2*n*n+3*n+2))/8;

    cout<<sum<<endl;

    return 0;
}

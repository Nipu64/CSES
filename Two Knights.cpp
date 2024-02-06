#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll ans,s,m,r;
    for(int i=1;i<=n;i++)
    {
        s=i*i;
        m=s*(s-1)/2;
        r=4*(i-1)*(i-2);
        ans=m-r;
        cout<<ans<<endl;
    }
    return 0;
}


[1095](https://cses.fi/problemset/task/1095/)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss "\n"
const int mod=1e9+7;
using namespace std;
ll binary_exp(ll a,ll b)
{
    //base case
    if(b==0)
    return 1;
    ll res=binary_exp(a,b/2);
    if(b%2==1)
    {
        return (((res*res)%mod)*a)%mod;
    }
    else
    {
        return (res*res)%mod;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll base,exp;
        cin>>base>>exp;
        cout<<binary_exp(base,exp)<<ss;
    }
    return 0;
}

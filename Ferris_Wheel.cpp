#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ss "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll i=0,j=n-1,cnt=0;
    while(i!=j && i<j){
        if((a[i]+a[j])<=x){
            cnt++;
            i++;
            j--;
        }
        else if((a[i]+a[j])>x){
            cnt++;
            j--;
        }
    }
    if(i==j)
    {
        cnt++;
    }
    cout<<cnt<<ss;
    return 0;
}

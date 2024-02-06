#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
ll searching(ll a[],ll first,ll last,ll t,ll n){
    ll result=0;
    while(first<=last)
    {
        ll mid=(first+(last-first)/2);
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            cnt+=mid/a[i];
        }
        if(cnt>=t){
            last=mid-1;
            result=mid;
        }
       // else if(cnt>t)last=mid-1;
        else first=mid+1;
    }
    return result;

}
int main()
{
    sync;

    ll n,t,first,last,ans;
    cin>>n>>t;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];

    ll mini=*min_element(a,a+n);
     first=0;
     last=t*mini;
     ans=searching(a,first,last,t,n);
     cout<<ans<<"\n";

     return 0;

}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    ll x;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}

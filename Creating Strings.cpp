#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0 )
    return 1;
    else
    {
        int facti=1;
        for(int i=2;i<=n;i++)
        {
           facti*=i;
        }
        return facti;
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    map<char,int>mp;
    for(int i=0;i<s.size();++i)
        mp[s[i]]++;


        map<char,int>::iterator it;
        int sum=0;
    for(it=mp.begin();it!=mp.end();++it)
    {
       sum+=it->second;
    }
    int ans=fact(sum);
    for(it=mp.begin();it!=mp.end();++it)
    {
        ans=ans/fact(it->second);

    }
    cout<<ans<<"\n";
    sort(s.begin(),s.end());
    cout<<s<<"\n";
    while(next_permutation(s.begin(),s.end()))
    {
        cout<<s<<"\n";
    }
    return 0;
}

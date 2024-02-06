#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();++i)
    {
        mp[s[i]]++;
    }
    map<char,int>::iterator it;
    int cnt=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second%2!=0)
           cnt++;
    }
    if(cnt>1)
        cout<<"NO SOLUTION\n";
    else
    {
        vector<char>x,y;
    for(it=mp.begin();it!=mp.end();it++)
    {
       if(it->second%2!=0)
       {
           while(it->second--)
           {
               x.push_back(it->first);
           }
       }
       else
       {
           int t=it->second/2;
           while(t--)
           {
               y.push_back(it->first);
           }
       }
    }
    for(auto u:y)
        cout<<u;
    for(auto u:x)
        cout<<u;
    reverse(y.begin(),y.end());
    for(auto u:y)
        cout<<u;
    cout<<"\n";

    }
    return 0;
}

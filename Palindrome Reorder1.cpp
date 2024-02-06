#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
    string s,v1,v2;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)mp[s[i]]++;
    int cnt=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second%2!=0)cnt++;
    }

    if(cnt>1)
        cout<<"NO SOLUTION\n";
    else{
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second%2!=0){
                for(int i=0;i<it->second;i++)v1.push_back(it->first);
            }
            else{
            for(int i=0;i<it->second/2;i++)v2.push_back(it->first);
            }
        }
        cout<<v2<<v1;
        reverse(v2.begin(),v2.end());
        cout<<v2<<"\n";

    }
    return 0;
}

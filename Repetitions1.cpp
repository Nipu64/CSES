#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
    string s;
    cin>>s;
    int cnt,maxi=1;
    for(int i=0;i<s.size();i++)
    {
        cnt=1;
        while(s[i]==s[i+1])
        {
            cnt++;
            i++;
        }
        maxi=max(maxi,cnt);

    }
    cout<<maxi<<"\n";
    return 0;
}

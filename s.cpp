#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    ll cnt[256] = {};

    for(int i=0; i<s.size()-1; i++){
        int val = s[i];
        if(s[i]==s[i+1]){
           cnt[val]++;
        }
    }

    ll ans=0;
    for(char i='A'; i<='Z'; i++){
        if(cnt[i]>0){
           ans = max(ans,cnt[i]);
        }
    }


    cout<< ans+1 << endl;

    return 0;
}


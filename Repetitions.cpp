#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0,c=0,g=0,t=0,ans;
    int x=s.size();
    for(int i=0;i<x;i++)
    {
        if(s[i]=='A')
            a++;
         if(s[i]=='C')
            c++;
         if(s[i]=='T')
            t++;
         if(s[i]=='G')
            g++;
    }
    if(a==c && c==t && t==g)
        ans=1;
    else
    ans=max(a,max(c,max(t,g)));

    cout<<ans<<endl;
}

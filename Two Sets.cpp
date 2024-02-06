#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll sum;
    sum=(n*(n+1))/2;
    vector<int> v,s;
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
        sum=sum/2;
        for(int i=n;i>0;i--)
        {
            if(i<=sum)
            {
              v.push_back(i);
              sum=sum-i;
            }
            else
                s.push_back(i);
        }
        cout<<v.size()<<endl;
        for(auto u:v)
            cout<<u<<" ";
        cout<<endl;
        cout<<s.size()<<endl;
        for(auto u:s)
            cout<<u<<" ";
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;




        return 0;
}

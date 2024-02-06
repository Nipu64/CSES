#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
  ll n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)cin>>a[i];

  stack<ll>st;

  for(int i=0;i<n;i++)
  {
      while(!st.empty() && a[st.top()]>=a[i])st.pop();
      if(st.empty())cout<<0<<" ";
      else cout<<st.top()+1<<" ";

      st.push(i);
  }
  cout<<"\n";

  return 0;
}

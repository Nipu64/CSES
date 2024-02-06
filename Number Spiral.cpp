#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
            if(a>b)
            {
                if(a%2==0)
                    cout<<a*a-b+1<<endl;
                else
                {
                    --a;
                    cout<<a*a+b<<endl;
                }
            }
            else
            {
                if(b%2!=0)
                    cout<<b*b-a+1<<endl;
                    else
                    {
                        --b;
                        cout<<b*b+a<<endl;
                    }
            }

    }
    return 0;

}

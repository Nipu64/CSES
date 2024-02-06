#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=5;n/i>=1;i*=5)
    {
        cnt+=(n/i);
    }
    cout<<cnt<<endl;

    return 0;
}

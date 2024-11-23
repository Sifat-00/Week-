#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long a,b,n,x;
        cin>>a>>b>>n>>x;

        if((a*n)>=x)
        {
            long long xx = x%n;

            if(xx<=b)
            {
                cout<<"YES" << endl;
            }
            else
            {
                cout<<"NO" << endl;
            }
        }
        else
        {
            long long ans = x - (a*n) ;
            if(ans<=b)
            {
                cout<<"YES" << endl;
            }
            else
            {
                cout<<"NO" << endl;
            }
        }
    }
    return 0;
}
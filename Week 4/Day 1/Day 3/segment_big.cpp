#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int  l=0,r=0;
    int ans = INT_MAX;
    ll sum = 0;

    while(r<n)
    {
        sum+=a[r];
        if(sum>=k)
        {
            ans = min(ans,r-l+1);
            while(l<=r && sum>=k)
            {
                sum-=a[l];
                l++;
                if(sum>=k)
                {
                    ans = min(ans,r-l+1);
                }
            }
        }
        r++;

    }

    if(ans==INT_MAX)
    {
        cout <<-1 <<endl;
    }
    else{
        cout<<ans;
    }
    return 0;
}
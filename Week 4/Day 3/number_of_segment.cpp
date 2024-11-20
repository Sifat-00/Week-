#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

   int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l =0,r=0;
    long long ans = 0;
    long sum = 0;

    while(r<n)
    {
        sum+=a[r];
        if(sum<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<n && sum>k)
            {
                sum-=a[l];
                l++;
            }
            if(sum<=k)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    
    cout << ans << endl;

    return 0;
}
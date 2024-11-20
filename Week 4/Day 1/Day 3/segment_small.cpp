#include<bits/stdc++.h>
#define ll long long int
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

    int l=0,r=0,ans=0;
    ll sum = 0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=k)
        {
            ans = max(ans,r-l+1);
        }
        else
        {
            sum-=a[l];
            l++;
        }
        
        r++;
    }
    cout <<ans <<endl;
    return 0;
}
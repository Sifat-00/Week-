#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;

        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int l=0,r=0;
        int ans = INT_MIN;
        int sum = 0;

        while(r<n)
        {
            sum+=v[r];

            if(sum==s)
            {
                ans = max(ans,(r-l+1));
            }
            else
            {
                while(l<=r && sum>s)
                {
                    sum-=v[l];
                    l++;
                }

                if(sum==s)
                {
                    ans = max(ans,r-l+1);
                }
            }

            r++;
        }

        if(ans==INT_MIN)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n - ans << endl;
        }
    }
    return 0;
}
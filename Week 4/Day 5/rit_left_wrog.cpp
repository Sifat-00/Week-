#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        string s;
        cin>>s;

        vector<long long int> sum(n);

        sum[0] = v[0];

        for(int i=1;i<n;i++)
        {
            sum[i] = sum[i-1]+v[i];
        }

        long long int ans = 0;
        int l=0;
        int r=n-1;

        while(l<r)
        {
            if(s[l]=='L' && s[r]=='R')
            {
                if(l==0)
                {
                    ans+=sum[r];
                }

                else
                {
                    ans+= (sum[r]-sum[l-1]);
                }

                l++;
                r--;
            }
            if(s[l]!='L')
            {
                l++;
            }

            else if(s[r]!='R')
            {
                r--;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
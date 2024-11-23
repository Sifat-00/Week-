#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        long long  ans = b;

        for(int x:v)
        {
           
            int val = min(a-1,x);
            ans+=val;
        }
        cout << ans << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        map<int,int> mp;
        int n;
        cin>>n;
        int x = n*(n-1)/2;
        vector<int> v(x);

        for(int i=0;i<x;i++)
        {
           cin>>v[i];
            mp[v[i]]++;
        }

        if(mp.size()==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<v[0]<<" ";
            }
            cout << endl;
            continue;
        }

        int m = n-1;
        for(auto[a,b]:mp)
        {
            while(b!=0 && b>=m)
            {
                cout << a <<" ";
                b-=m;
                m--;
            }
        }

        int ans = 1e9;
        cout<<ans<< endl;
    }
    return 0;
}
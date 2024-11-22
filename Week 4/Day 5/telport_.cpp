#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        vector<int> v(n);

        priority_queue<long long int,vector<long long>,greater<int>> pq;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            pq.push(v[i]+i+1);
        }

        int cnt = 0;

        while(!pq.empty())
        {
            if(x>=pq.top())
            {
                cnt++;
                x-=pq.top();
            }
            else break;

            pq.pop();
        }
        
        cout << cnt << endl;

    }
    return 0;
}
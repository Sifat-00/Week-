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
        string s;

        cin>>s;

        char x = s[0];
        int l = 1;
        int cnt = 0,flag = true;

        while(l<s.size())
        {
            if(flag && s[l]!=x)
            {
                cnt++;
                flag = false;
            }

            else if(s[l]==x)
            {
                flag = true;
            }

            l++;
        }
        cout << cnt << endl;
    }
    return 0;
}
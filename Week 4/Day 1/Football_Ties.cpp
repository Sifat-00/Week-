#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int draw = 0;
        a=a%3;
        b=b%3;
        cout << min(a,b) << endl;
    }
}
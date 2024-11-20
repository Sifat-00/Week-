#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    cin >> a >> b;
    int val = abs(a-b);
    if(val>=18) cout << "RCB"  << endl;
    else cout << "CSK" << endl;
    vector<int> v= {1,2,3,4};
    v.erase(v.begin()+0);
    for(auto x : v) cout << x << endl;

}
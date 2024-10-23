//https://codeforces.com/problemset/problem/41/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b; cin >> a>>b;
    reverse(b.begin(), b.end());
    
    if(a==b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
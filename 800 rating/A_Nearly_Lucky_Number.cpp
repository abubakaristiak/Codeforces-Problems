//https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin >> n;
    int lucky_count=0;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='4' || n[i]=='7') lucky_count++;
    }
    if(lucky_count==4 || lucky_count==7) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
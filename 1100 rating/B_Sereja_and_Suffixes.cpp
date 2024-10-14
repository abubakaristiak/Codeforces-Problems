//https://codeforces.com/contest/368/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    vector<int> ar(n+1);
    for(int i=1; i<=n; i++){
        cin >> ar[i];
    }

    vector<int> cnt(n+1);
    set<int> s;
    for(int i=n; i>=1; i--){
        s.insert(ar[i]);
        cnt[i] = s.size();
    }
    for(int i=1; i<=m; i++){
        int pos;
        cin>> pos;
        cout << cnt[pos] << endl;
    }
    return 0;
}
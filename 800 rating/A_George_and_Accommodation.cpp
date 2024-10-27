// https://codeforces.com/problemset/problem/467/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    int cnt=0;
    while (t--)
    {
        int a,b; cin >> a >> b;
        if(b-a>=2){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
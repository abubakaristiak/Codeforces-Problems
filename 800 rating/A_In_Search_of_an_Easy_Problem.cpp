//https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    int a;
    bool flag=true;
    while (t--)
    {
        cin >> a;
        if(a==1){
            flag=false;
        }
    }
    if(flag==false) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    
    return 0;
}
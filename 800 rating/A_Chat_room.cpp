//https://codeforces.com/problemset/problem/58/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    string a="hello";

    int j=0;
    for(int i=0; i<s.length(); i++){
        if(a[j]==s[i]){
            j++;
            if(j==5){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
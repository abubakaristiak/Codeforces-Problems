//https://codeforces.com/problemset/problem/266/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,t;
    cin >> n >> t;
    string s; cin >> s;


    for(int i=0; i<t; i++){
        for(int j=0; j<s.size(); j++){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
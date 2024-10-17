//https://codeforces.com/problemset/problem/281/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    if(s[0]>=97 && s[0]<=122){
        s[0]=s[0]-32;
    }
    cout << s << endl;
    return 0;
}